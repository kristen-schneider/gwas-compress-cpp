//
// Created by Kristen Schneider on 1/27/22.
//

#ifndef CPRACTICE_FUNNEL_FORMAT_H
#define CPRACTICE_FUNNEL_FORMAT_H

#endif //CPRACTICE_FUNNEL_FORMAT_H

#include <string>
using namespace std;

vector<vector<vector<string>>> generate_block(string gwasFileName, int blockSize, char delim, int numCols);
vector<vector<string>> transposeBlock(vector<string> block, char delim, int numCols);