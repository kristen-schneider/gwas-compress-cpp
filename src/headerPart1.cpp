#include <iostream>
#include <string>

#include "headerPart1.h"

using namespace std;

/*
 * returns an array of pointers to header part1 data
 *
 * magic number: int
 * version number: int
 * delimiter: char
 * column names: array of strings
 * decompression column types: array of ints
 * num columns: int
*/

HeaderPart1 make_header_part1(){
    HeaderPart1 headerPart1;
    headerPart1.magicNumber = magic_number();
    headerPart1.versionNumber = version_number();
    headerPart1.delimiter = delimiter();

    return headerPart1;
}

int magic_number(){ return 1;}
int version_number(){ return 1;}
char delimiter(){return '\t';}
