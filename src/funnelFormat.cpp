//
// Created by Kristen Schneider on 1/27/22.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "funnelFormat.h"
#include "utils.h"
using namespace std;

vector<vector<vector<string>>> generate_block(string gwasFileName, int blockSize,
                                              char delim, int numCols){
    ifstream gwasFile;
    string header = "";
    string row;
    vector<string> block;
    vector<vector<string>> colBlock;
    vector<vector<vector<string>>> allBlocks;
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
            colBlock = transposeBlock(block, delim, numCols);
            allBlocks.push_back(colBlock);
            block.clear();
            r = 0;
        }
    }
    // any left over data that is less than a full block size
    if(!block.empty()){
        colBlock = transposeBlock(block, delim, numCols);
        allBlocks.push_back(colBlock);
    }
    return allBlocks;
}

vector<vector<string>> transposeBlock(vector<string> block, char delim, int numCols){
    vector<string> splitRow;
    vector<vector<string>> transposedBlock(numCols);

    for(int r = 0; r < block.size(); r++){
        splitRow = splitString(block.at(r), delim);
        for(int c = 0; c < numCols; c++){
            transposedBlock.at(c).push_back(splitRow.at(c));
        }
    }
    return transposedBlock;
}