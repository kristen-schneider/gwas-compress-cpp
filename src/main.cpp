#include <iostream>
#include <string>
#include <vector>
#include "funnel_format.h"
#include "utils.h"
using namespace std;


/// probably wrong way to define this
char delim = '\t';
///

int main() {
    string gwasFileName = "../data/ten.tsv";
    int numCols;
    vector<string> fileHeader;

    // get information needed for compression
    numCols = countNumberColumns(gwasFileName, delim);

//    // generate funnel format
//    cout << "Generating funnel format...\n" << endl;
//    numCols = countNumberColumns(gwasFileName);
//    fileHeader = returnFileHeader(gwasFileName, numCols);

    // compress funnel format


    return 0;
}
