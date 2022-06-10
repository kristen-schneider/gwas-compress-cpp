# 0. Installation
## Set up conda environment
<code>conda create --name gwas-compress</code><br>
<code>conda activate gwas-compress</code><br>
install [pyfastpfor](https://github.com/searchivarius/PyFastPFor) <code>conda install -c conda-forge cxx-compiler</code><br>
install [cppunit](http://cppunit.sourceforge.net/doc/1.8.0/) <code>conda install -c conda-forge cppunit</code><br>

# 1. Compile and run (compression)

## ...compression using g++<br>
<code>g++ main.cpp configReader.cpp -I ../include/ -o ../bin/tests</code><br>
<code>../bin tests</code><br>

## ...compression with bash script
<code>bash run.sh</code><br>

## ...compression with githubactions flow
[basic github actions](https://www.incredibuild.com/blog/using-github-actions-with-your-c-project)
<br>
<code>./configure</code><br>
<code>make</code><br>
