//
// Created by Kristen Schneider on 1/27/22.
//

#ifndef CPRACTICE_FUNNEL_FORMAT_H
#define CPRACTICE_FUNNEL_FORMAT_H

#endif //CPRACTICE_FUNNEL_FORMAT_H

using namespace std;
#include <string>

int generate_funnel_format(string gwasFileName);
int get_number_columns(string gwasFileName);
vector<string> get_file_header(string gwasFileName, int numCols);