//
// Created by Kristen Schneider on 2/23/22.
//

#include <iostream>
#include <string>
#include <vector>
#include "funnelFormatCompress.h"
#include "gzipWrapper.h"

using namespace std;

vector<string> compressAllBlocks(vector<vector<vector<string>>> allBlocks, int numCols, int blockSize){
    vector<string> allCompressedBlocks;
    vector<vector<string>> currentBlock;

    for(int blockIndex = 0; blockIndex < allBlocks.size(); blockIndex++){
        currentBlock = allBlocks.at(blockIndex);
        string compressedBlock = compressSingleBlock(currentBlock, numCols);
        allCompressedBlocks.push_back(compressedBlock);
    }
    return allCompressedBlocks;
}

string compressSingleBlock(vector<vector<string>> block, int numCols){
    string compressedBlock;
    vector<string> currentColumn;
    string currentElement;

    for (int columnIndex = 0; columnIndex < numCols; columnIndex++) {
        currentColumn = block.at(columnIndex);

        // i think what i want to do here is convert the vector of strings to a bistring.
        // then compress the bitstring
        
        for (int elementIndex = 0; elementIndex < currentColumn.size(); elementIndex++) {
            currentElement = currentColumn.at(elementIndex);
//            string compressedElement = gzipCompress(currentElement);
//            compressedBlock += compressedElement;
        }
    }

    return compressedBlock;
}
