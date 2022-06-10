#include <fstream>
#include <iostream>
#include <map>
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

HeaderPart1 make_header_part1(string gwasFile, int maxNumCols){
    // read first two lines of file
    string* firstTwoLines = new string[2];
    firstTwoLines = read_first_two_lines(gwasFile, firstTwoLines);
    string gwasHeader = firstTwoLines[0];    
    string gwasData = firstTwoLines[1];    
    // allocate space for colNames and decompressionTypes
    string* colNames = new string[maxNumCols];
    string* decompressionTypes = new string[maxNumCols];

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
        for (int i = 0; i < maxNumCols; i++){
            cout << "\t\t" << headerPart1.colNames[i] << endl;
        }
    cout << "\tColumn Decompression Types: " << endl;
        for (int i = 0; i < maxNumCols; i++){
            cout << "\t\t" << headerPart1.colDecompressionTypes[i] << endl;
        }
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

string* decompression_types_array(string gwasData, string* decompressionTypes, char delimiter){
    string columnHeader;
    string dataType;
    stringstream hSS (gwasData);
    int i = 0;
    while(getline (hSS, columnHeader, delimiter)){
        decompressionTypes[i] = get_data_type(columnHeader);
        i++;
    }    

    return decompressionTypes;
}

