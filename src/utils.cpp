//
// Created by Kristen Schneider on 2/22/22.
//

using namespace std;

#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>
#include "utils.h"

vector<string> splitString(string s, char delim){
    string h;
    vector<string> vectorString;
    stringstream ss;

    ss.str(s);

    getline(ss, h, delim);
    vectorString.push_back(h);
    while(getline(ss, h, delim)){
        vectorString.push_back(h);
    }
    return vectorString;
}

int countNumberColumns(string gwasFileName, char delim){
    int numCols = 0;
    ifstream gwasFile;
    string header;
    string h;
    vector<string> vectorHeader;

    // opening file
    gwasFile.open(gwasFileName);
    if (!gwasFile.is_open()){
        cout << "Cannot open file: " << gwasFileName << endl;
        EXIT_FAILURE;
    }

    // read first line (header)
    getline(gwasFile, header);
    // parse header
    vectorHeader = splitString(header, delim);
    numCols = vectorHeader.size();

    // closing file
    gwasFile.close();
    return numCols;
}

vector<string> returnFileHeader(string gwasFileName, int numCols, char delim){
    ifstream gwasFile;
    string header;
    string h;
    vector<string> vectorHeader;

    // opening file
    gwasFile.open(gwasFileName);
    if (!gwasFile.is_open()){
        cout << "Cannot open file: " << gwasFileName << endl;
        EXIT_FAILURE;
    }

    // read first line (header)
    getline(gwasFile, header);
    // parse header
    vectorHeader = splitString(header, delim);

    return vectorHeader;
}

