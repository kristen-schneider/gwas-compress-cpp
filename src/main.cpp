#include <iostream>
#include <string>
#include <vector>
#include "funnel_format.h"
using namespace std;

int main() {
    string gwasFileName = "../data/ten.tsv";
    int numCols;
    vector<string> fileHeader;

    // generate funnel format
    cout << "Generating funnel format...\n" << endl;
    numCols = get_number_columns(gwasFileName);
    fileHeader = get_file_header(gwasFileName, numCols);

    // compress funnel format


    return 0;
}
