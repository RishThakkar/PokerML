"""
Image Augmentation

This script processes a directory of images, applying multiple augmentations including
perspective transformations, glare effects, and rotations to each image, and saves
the augmented images in a specified output directory.

Author: Giuseppe Di Guglielmo
Date: 2024-03-26
Last Updated: 2024-03-26
"""

import cv2
import numpy as np
import os
import argparse
from glob import glob

def load_image(image_path):
    """Load an image from the disk."""
    return cv2.imread(image_path)

def apply_perspective_transform(image, strength=0.05):
    """Apply a perspective transformation to simulate a different camera angle."""
    rows, cols, ch = image.shape
    src_points = np.float32([[0, 0], [cols-1, 0], [0, rows-1], [cols-1, rows-1]])
    dst_points = np.float32([
        [cols*strength, rows*strength],
        [cols*(1-strength), rows*strength],
        [cols*strength, rows*(1-strength)],
        [cols*(1-strength), rows*(1-strength)]
    ])
    matrix = cv2.getPerspectiveTransform(src_points, dst_points)
    transformed = cv2.warpPerspective(image, matrix, (cols, rows))
    return transformed

def add_glare_effect(image):
    """Add a simple glare effect to the image."""
    overlay = image.copy()
    output = image.copy()

    center = (np.random.randint(0, image.shape[1]), np.random.randint(0, image.shape[0]))
    axes = (np.random.randint(image.shape[1]//4, image.shape[1]//2), np.random.randint(image.shape[0]//4, image.shape[0]//2))
    angle = np.random.randint(0, 180)
    cv2.ellipse(overlay, center, axes, angle, 0, 360, (255, 255, 255), -1)

    alpha = np.random.uniform(0.2, 0.5)  # Random transparency for the glare effect
    cv2.addWeighted(overlay, alpha, output, 1 - alpha, 0, output)
    return output

def rotate_image(image, angle):
    """Rotate the image by a specified angle."""
    rows, cols, ch = image.shape
    matrix = cv2.getRotationMatrix2D((cols / 2, rows / 2), angle, 1)
    rotated = cv2.warpAffine(image, matrix, (cols, rows))
    return rotated

def process_directory(input_dir, output_dir):
    """Process all images in the specified directory and its subdirectories, applying multiple augmentations."""
    for root, dirs, files in os.walk(input_dir):
        for file in files:
            if file.lower().endswith(('.png', '.jpg', '.jpeg', '.bmp', '.tif', '.tiff')):
                image_path = os.path.join(root, file)
                image = load_image(image_path)
                relative_path = os.path.relpath(root, input_dir)
                output_subdir = os.path.join(output_dir, relative_path)

                if not os.path.exists(output_subdir):
                    os.makedirs(output_subdir)

                base_name = os.path.basename(image_path)
                name, ext = os.path.splitext(base_name)

                for i in range(32):
                    modified_image = image
                    # Randomly apply transformations
                    if np.random.rand() > 0.5:
                        strength = np.random.uniform(0.02, 0.1)
                        modified_image = apply_perspective_transform(modified_image, strength=strength)
                    if np.random.rand() > 0.5:
                        modified_image = add_glare_effect(modified_image)
                    if np.random.rand() > 0.5:
                        angle = np.random.uniform(-180, 180)
                        modified_image = rotate_image(modified_image, angle=angle)

                    output_path = os.path.join(output_subdir, f"{name}_augmented_{i+1}{ext}")
                    cv2.imwrite(output_path, modified_image)

def main():
    parser = argparse.ArgumentParser(description="Image augmentation.")
    parser.add_argument("input_dir", type=str, help="Path to the input directory containing images.")
    parser.add_argument("output_dir", type=str, help="Path to the output directory where augmented images will be saved.")

    args = parser.parse_args()

    process_directory(args.input_dir, args.output_dir)

if __name__ == "__main__":
    main()
