from setuptools import setup, Extension
import pybind11

ext_modules = [
    Extension(
        'vector_module',
        sources=['bindings.cpp'],
        include_dirs=[pybind11.get_include()],
        language='c++'
    ),
]

setup(
    name='vector_module',
    version='0.1',
    ext_modules=ext_modules,
)
