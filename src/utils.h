//
// Created by Kristen Schneider on 2/22/22.
//

#ifndef GWAS_CPP_UTILS_H
#define GWAS_CPP_UTILS_H

#endif //GWAS_CPP_UTILS_H

using namespace std;
#include <string>
#include <string>
#include <vector>

vector<string> splitString(string s, string delim);
int countNumberColumns(string gwasFileName, string delim);
vector<string> returnFileHeader(string gwasFileName, int numCols);