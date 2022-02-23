#include <iostream>
#include <string>
#include <vector>
#include "funnelFormat.h"
#include "utils.h"
#include "gzip_wrapper.h"
using namespace std;

int main() {

    /*
    0. get arguments from user to run compression according to their preferences
    1. gets beginning of header (magic number, version, delimiter, column labels, column types, num columns, gzip header)
    2. generates funnel format (list of blocks)
    3. compress data and get second half of header *depends on input data type and compression data type
    4. compress full header
    5. write compressed header
    6. write compressed data
    */

    // 0 & 1 setting space for compression header
    // 0: input info should be read in from config file (
    // 1: (delimiter, blockSize, gwasHeader, columnTypes, numColumns)
    string gwasFileName = "../data/c10r11.tsv";

    char delimiter = '\t';
    int blockSize = 3;
    vector<string> gwasHeader;
    vector<int> columnTypes; // 0-int, 1-float, 2-string, 3-bool
    int numColumns;

    cout << "Getting starter data..." << endl;
    numColumns = countNumberColumns(gwasFileName, delimiter);
    gwasHeader = returnFileHeader(gwasFileName, numColumns, delimiter);


    // 2: generates funnel format (vector of vector of strings)
    vector<vector<string>> allBlocks;

    cout << "Generating funnel format..." << endl;
    allBlocks = generate_block(gwasFileName, blockSize);

    // 3: compress funnel format, return second half of header

    //int gzipCompress(int argc, char** argv);
//    int gz = gzipCompress()

    return 0;
}
