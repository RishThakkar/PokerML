help:
	@echo "INFO: make <TAB> for targets"
.PHONY: help

run-augmentation:
	@python augmentation.py original augmented
.PHONY: run-augmentation

run-advanced-augmentation:
	@python advanced_augmentation.py original augmented_WIP
.PHONY: run-advanced-augmentation

count-original:
	@find original -type f | wc -l
.PHONY: count-original

count-augmented:
	@find augmented -type f | wc -l
.PHONY: count-augmented

