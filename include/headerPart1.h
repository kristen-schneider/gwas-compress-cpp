#ifndef HEADER_PART1_H
#define HEADER_PART1_H

#include <iostream>
#include <string>
using namespace std;

#define MAX_NUM_COLS 10

struct HeaderPart1{
    int magicNumber;
    int versionNumber;
    char delimiter;
    string colNames[MAX_NUM_COLS];
    int colDecompressionTypes[MAX_NUM_COLS];
};
#endif // HEADER_PART1

HeaderPart1 make_header_part1();
int magic_number();
int version_number();
char delimiter();
