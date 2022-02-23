//
// Created by Kristen Schneider on 1/27/22.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "funnelFormat.h"
using namespace std;

vector<vector<string>> generate_block(string gwasFileName, int blockSize){
    ifstream gwasFile;
    string header = "";
    string row;
    vector<string> block;
    vector<vector<string> > allBlocks;
    int r = 0;

    // opening file
    gwasFile.open(gwasFileName);
    if (!gwasFile.is_open()){
        cout << "Cannot open file: " << gwasFileName << endl;
        EXIT_FAILURE;
    }

    // reading one block at a time
    while(r < blockSize && getline(gwasFile, row)){
        if(header == ""){
            header = row;
        }else{
            block.push_back(row);
            r++;
        }
        if(r == blockSize){
            allBlocks.push_back(block);
            block.clear();
            r = 0;
        }
    }
    // any left over data that is less than a full block size
    if(!block.empty()){
        allBlocks.push_back(block);
    }
    return allBlocks;
}