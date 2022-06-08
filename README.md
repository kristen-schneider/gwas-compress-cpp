# 0. Installation
<br>
### Set up conda environment and install [pyfastpfor](https://github.com/searchivarius/PyFastPFor)
```
conda create --name gwas-compress
conda activate gwas-compress
conda install -c conda-forge cxx-compiler
```

# 1. Compile and run
<br>
### To compile and run compression using g++
```
g++ main.cpp configReader.cpp \
    -I ../include/ \
    -o ../bin/test

../bin test
```
