# 0. Installation
<br>
### Set up conda environment and install [pyfastpfor](https://github.com/searchivarius/PyFastPFor)<br>

<code>conda create --name gwas-compress</code><br>
<code>conda activate gwas-compress</code><br>
<code>conda install -c conda-forge cxx-compiler</code><br>
<code>conda install -c conda-forge cppunit</code><br>

# 1. Compile and run, normally
<br>
### ...compression using g++<br>
<code>g++ main.cpp configReader.cpp -I ../include/ -o ../bin/tests</code><br>
<br>
<code>../bin tests</code><br>
<br>
### ...compression with bash script
<br>
<code>run bash.sh</code><br\
### ...compression with githubactions flow [basic github actions](https://www.incredibuild.com/blog/using-github-actions-with-your-c-project)
<br>
<code>./configure</code><br>
<code>make</code><br>
