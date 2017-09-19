# This is the setup file for the pypuf_helper module

from distutils.core import setup, Extension
import numpy

pypuf_helper = Extension(
  'pypuf_helper',
  include_dirs=[
    '/usr/local/include', numpy.get_include() + '/numpy',
    '/usr/include'],
  sources=[
    'pypuf_helper_src/python_wrapper.c',
    'pypuf_helper_src/eval_id_xor.c',
    'pypuf_helper_src/eval.c',
    'pypuf_helper_src/transform_id.c',
    'pypuf_helper_src/combiner_xor.c'
  ],
)

setup(name='pypuf_helper',
      packages=['pypuf_helper_src'],
      version='0.1',
      description='Helper module for the pypuf learning framework.',
      author='Tudor Soroceanu',
      author_email='tudor200@zedat.fu-berlin.de',
      url='https://github.com/taudor/pypuf_helper',
      download_url='https://github.com/taudor/pypuf_helper/archive/0.1.tar.gz',
      keywords=['pypuf, PUF'],
      classifiers = [],
      ext_modules=[pypuf_helper])
