//
// Created by Kristen Schneider on 2/23/22.
//

#ifndef GWAS_CPP_FUNNELFORMATCOMPRESS_H
#define GWAS_CPP_FUNNELFORMATCOMPRESS_H

#endif //GWAS_CPP_FUNNELFORMATCOMPRESS_H

#include <iostream>
#include <string>

using namespace std;

vector<string> compressAllBlocks(vector<vector<vector<string>>> allBlocks, int numCols, int blockSize);
string compressSingleBlock(vector<vector<string>> block, int numCols);
