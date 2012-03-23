from distutils.core import setup, Extension

hw_module = Extension('helloWorld',
                    sources = ['helloWorld.cpp'])

setup (name = 'helloWorld',
       version = '1.0',
       description = 'C module test',
       ext_modules = [hw_module])

