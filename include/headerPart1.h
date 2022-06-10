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
    int numColumns;
    string colNames[MAX_NUM_COLS];
    int colDecompressionTypes[MAX_NUM_COLS];
};
#endif // HEADER_PART1

HeaderPart1 make_header_part1(string gwasFile);
int magic_number();
int version_number();
char detect_delimiter(string line);
int count_num_columns(string line, char delimiter);
