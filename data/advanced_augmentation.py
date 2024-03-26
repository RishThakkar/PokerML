"""
Advanced Image Augmentation

This script processes a directory of images, applying a comprehensive set of augmentations
to simulate various realistic conditions such as different camera angles, lighting (glare,
shadows), color variations, and more, ideal for enhancing datasets like poker cards.

Author: Giuseppe Di Guglielmo
Date: 2024-03-26
Last Updated: 2024-03-26
"""

import cv2
import numpy as np
import os
import argparse
import albumentations as A
from glob import glob

def get_augmentations():
    """Define a set of augmentations to simulate realistic conditions."""
    return A.Compose([
        #A.RandomCrop(width=450, height=450, p=0.5),
        A.HorizontalFlip(p=0.5),
        A.RandomBrightnessContrast(p=0.2),
        A.ElasticTransform(alpha=120, sigma=120 * 0.05, alpha_affine=120 * 0.03, p=0.3),
        A.RGBShift(r_shift_limit=15, g_shift_limit=15, b_shift_limit=15, p=0.5),
        A.OneOf([
            A.MotionBlur(p=0.2),
            A.MedianBlur(blur_limit=3, p=0.1),
            A.GaussianBlur(blur_limit=3, p=0.1),
        ], p=0.5),
        A.OneOf([
            A.GaussNoise(var_limit=(10.0, 50.0), p=0.3),
            A.ISONoise(p=0.3),
        ], p=0.5),
    ])

def augment_image(image_path, augmentations):
    """Load an image, apply augmentations, and return the augmented image."""
    image = cv2.imread(image_path)
    augmented = augmentations(image=image)['image']
    return augmented

def process_directory(input_dir, output_dir, augmentations):
    """Process all images in the specified directory and its subdirectories, applying multiple augmentations."""
    for root, dirs, files in os.walk(input_dir):
        for file in files:
            if file.lower().endswith(('.png', '.jpg', '.jpeg', '.bmp', '.tif', '.tiff')):
                image_path = os.path.join(root, file)
                relative_path = os.path.relpath(root, input_dir)
                output_subdir = os.path.join(output_dir, relative_path)

                if not os.path.exists(output_subdir):
                    os.makedirs(output_subdir)

                base_name = os.path.basename(image_path)
                name, ext = os.path.splitext(base_name)

                for i in range(32):
                    augmented_image = augment_image(image_path, augmentations)
                    output_path = os.path.join(output_subdir, f"{name}_augmented_{i+1}{ext}")
                    cv2.imwrite(output_path, augmented_image)

def main():
    parser = argparse.ArgumentParser(description="Advanced image augmentation script.")
    parser.add_argument("input_dir", type=str, help="Path to the input directory containing images.")
    parser.add_argument("output_dir", type=str, help="Path to the output directory where augmented images will be saved.")

    args = parser.parse_args()

    augmentations = get_augmentations()
    process_directory(args.input_dir, args.output_dir, augmentations)

if __name__ == "__main__":
    main()
