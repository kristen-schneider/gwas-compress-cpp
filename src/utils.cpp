//
// Created by Kristen Schneider on 2/22/22.
//

#include <fstream>
#include <iostream>
#include <string>

#include "utils.h"
using namespace std;

string* read_first_two_lines(string inFile, string* lineArrray){
    string firstLine;
    string secondLine;

    ifstream iFile;
    iFile.open(inFile);
    if(!iFile.is_open()){
        cerr << "Failed to open: " << inFile << endl;
    }else{
        getline(iFile, firstLine);
        getline(iFile, secondLine);
    }
    iFile.close();
    iFile.seekg(0);
    iFile.clear();
    
    lineArrray[0] = firstLine;
    lineArrray[1] = secondLine;
    return lineArrray;
}
