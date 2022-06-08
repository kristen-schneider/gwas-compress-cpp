//
// Created by Kristen Schneider on 2/22/22.
//

#ifndef GWAS_CPP_UTILS_H
#define GWAS_CPP_UTILS_H

#endif //GWAS_CPP_UTILS_H

#include <string>
#include <string>
#include <vector>
using namespace std;


vector<string> splitString(string s, char delim);
int countNumberColumns(string gwasFileName, char delim);
vector<string> returnFileHeader(string gwasFileName, int numCols, char delim);