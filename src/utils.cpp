//
// Created by Kristen Schneider on 2/22/22.
//

using namespace std;

#include <string>
#include <vector>
#include <iostream>
#include <fstream>


int get_number_columns(string gwasFileName)
{
    int numCols = 0;
    ifstream gwasFile;

    // opening file
    gwasFile.open(gwasFileName);
    if (!gwasFile.is_open())
    {
        cout << "Cannot open file: " << gwasFileName << endl;
        return -1;
    }
    // counting number columns

    return numCols;
}

vector<string> get_file_header(string gwasFileName, int numCols)
{
    vector<string> fileHeader;

    return fileHeader
}

