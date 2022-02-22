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

vector<string> splitString(string s, string delim){
    vector<string> vectorHeader;

    stringstream ss;
    ss.str(s);

    return vectorHeader;
}

int countNumberColumns(string gwasFileName, string delim){
    int numCols = 0;
    ifstream gwasFile;
    string header;
    string h;
    vector<string> vectorHeader;

    // opening file
    gwasFile.open(gwasFileName);
    if (!gwasFile.is_open()){
        cout << "Cannot open file: " << gwasFileName << endl;
        return -1;
    }

    // read first line (header)
    getline(gwasFile, header);
    cout << header << endl;

    // parse header
    vectorHeader = splitString(header, delim);

    // closing file
    gwasFile.close();
    return numCols;
}

//vector<string> returnFileHeader(string gwasFileName, int numCols){
//    vector<string> fileHeader;
//
//    return fileHeader;
//}

