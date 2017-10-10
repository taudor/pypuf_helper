# pypuf_helper [![Build Status Master Branch](https://travis-ci.org/taudor/pypuf_helper.svg?branch=master)](https://travis-ci.org/taudor/pypuf_helper)

`pypuf_helper` is a python extension written in C. The goal is to
speed up critical parts of the [pypuf learning framework](https://github.com/nils-wisiol/pypuf).

# Installation

The simplest way to install `pypuf_helper` is to use `pip`:

```
pip3 install pypuf_helper
```

If you want to install `pypuf_helper` from source, clone the repository and execute

```
pip3 install -r requirements.txt
python3 setup.py install
```

# Requiements

`pypuf_helper` requires the module `numpy` for the installation and to work properly. If `numpy` is not installed, the installation via `pip3` also installs `numpy`. For the manual install it is recommended to install just `numpy` or to execute `pip3` to install from the `requirenments.txt`.