#ifndef HEADER_PART1_H
#define HEADER_PART1_H

#include <iostream>
#include <string>

using namespace std;

struct HeaderPart1{
    int magicNumber;
    int versionNumber;
    char delimiter;
    int numColumns;
    string* colNames;
    int* colDecompressionTypes;
};
#endif // HEADER_PART1

HeaderPart1 make_header_part1(string gwasFile, int maxNumCols);
int magic_number();
int version_number();
char detect_delimiter(string gwasHeader);
int count_num_columns(string gwasHeeader, char delimiter);
string* gwas_header_array(string gwasHeader, string* gwasHeaderArray, char delimiter);
int* decompression_types_array(string gwasData, int* decompressionTypes, char delimiter);
