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

int** make_header_part1(int** headerPart1, string gwasFile){

    int magicNumber = magic_number();
    headerPart1[0] = &magicNumber;
    int versionNumber = version_number();
    headerPart1[1] = &versionNumber;
    return headerPart1;

}

int magic_number(){ return 1; }
int version_number(){ return 1; }

