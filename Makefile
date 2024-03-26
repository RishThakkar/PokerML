help:
	@echo "INFO: make <TAB> for targets"
.PHONY: help

jupyter:
	jupyter notebook
.PHONY: jupyter

clean:
	rm -rf __pycache__
.PHONY: clean
