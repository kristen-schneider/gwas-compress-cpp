#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "headerPart1.h"
#include "utils.h"

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

#define MAX_NUM_COLS 10

HeaderPart1 make_header_part1(string gwasFile){
    // read first two lines of file
    string* firstTwoLines = new string[2];
    firstTwoLines = read_first_two_lines(gwasFile, firstTwoLines);
    string gwasHeader = firstTwoLines[0];    
    string gwasData = firstTwoLines[1];    
    // allocate space for colNames and decompressionTypes
    string* colNames = new string[MAX_NUM_COLS];
    int* decompressionTypes = new int[MAX_NUM_COLS];

    HeaderPart1 headerPart1;
    headerPart1.magicNumber = magic_number();
    headerPart1.versionNumber = version_number();
    headerPart1.delimiter = detect_delimiter(gwasHeader);
    headerPart1.numColumns = count_num_columns(gwasHeader, headerPart1.delimiter);
    headerPart1.colNames = gwas_header_array(gwasHeader, colNames, headerPart1.delimiter);
    headerPart1.colDecompressionTypes = decompression_types_array(gwasData, decompressionTypes, headerPart1.delimiter);

    // print header
    cout << "File Header: " << endl;
    cout << "\tMagic Number: " << headerPart1.magicNumber << endl;
    cout << "\tVersion Number: " << headerPart1.versionNumber << endl;
    cout << "\tDelimiter: ";
        if (headerPart1.delimiter == ' '){ cout << "space" << endl;}
        else if(headerPart1.delimiter == '\t'){ cout << "tab" << endl;}
        else{ cout << headerPart1.delimiter << endl;}
    cout << "\tNumber of Columns: " << headerPart1.numColumns << endl;
    cout << "\tColumn Names: " << endl;
        for (int i = 0; i < MAX_NUM_COLS; i++){
            cout << "\t\t" << headerPart1.colNames[i] << endl;
        }
    cout << "\tColumn Decompression Types: " << endl;

    return headerPart1;
}

int magic_number(){ return 1;}

int version_number(){ return 1;}

char detect_delimiter(string gwasHeader){
    char delimiter;
    if (gwasHeader.find(' ') != string::npos){
        delimiter = ' ';
    } else if(gwasHeader.find('\t') != std::string::npos) {
    delimiter = '\t';
    } else if(gwasHeader.find(',') != std::string::npos) {
        delimiter = ',';
    } else {cerr << "no delimiter detected.";}
       
    return delimiter;
}

int count_num_columns(string gwasHeader, char delimiter){
    int numColumns = 0;
    string column;
    stringstream hSS (gwasHeader);
    while(getline (hSS, column, delimiter)){
        numColumns++;
    }
    return numColumns;
}

string* gwas_header_array(string gwasHeader, string* gwasHeaderArray, char delimiter){
    string columnHeader;
    stringstream hSS (gwasHeader);
    int i = 0;
    while(getline (hSS, columnHeader, delimiter)){
        gwasHeaderArray[i] = columnHeader;
        i++;
    }

    return gwasHeaderArray;
}

int* decompression_types_array(string gwasData, int* decompressionTypes, char delimiter){
    return decompressionTypes;
}

