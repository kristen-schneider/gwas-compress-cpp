//
// Created by Kristen Schneider on 1/27/22.
//

using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "funnel_format.h"





vector<string> generate_funnel_format(string gwasFileName, int numCols)
{
    // initializing file variables
    vector<string> fileHeaderVector;
    vector<string> allRows;

//    // opening file
//    gwasFile.open(gwasFileName);
//    if (!gwasFile.is_open())
//    {
//        cout << "Cannot open file: " << gwasFileName << endl;
//        return -1;
//    }
//
//
//
//    // reading file
//    while(!gwasFile.eof())
//    {
//        string col;
//        string currentRow;
//
//        if(!fileHeader)
//        {
//            fileHeaderVector =
//        }else
//        {
//            getline(gwasFile, currentRow, delim);
//            cout << "Row: " << currentRow << endl;
//            allRows.push_back(currentRow);
//        }
//        // printing data for debug
//        cout << "File Header" << endl;
//        for(int i = 0; i < fileHeaderVector.size(); i++)
//        {
//            cout << fileHeaderVector.at(i) << endl;
//        }
//    }
//
//    // closing file
//    gwasFile.close();
//    return 0;
}