#include <iostream>
#include <string>
#include <vector>
#include "funnel_format.h"
#include "utils.h"
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

    // 0.1 getting pre-info: TO CHANGE (config file)
    char delim = '\t';
    int blockSize = 3;
    string gwasFileName = "../data/c10r10.tsv";

    //
    int numCols;
    vector<string> fileHeader;
    vector<vector<string>> allBlocks;

    // get information needed for compression
    numCols = countNumberColumns(gwasFileName, delim);
    cout << "Getting starter data..." << endl;
    cout << "Number of columns: " << numCols << endl;
    fileHeader = returnFileHeader(gwasFileName, numCols, delim);
    //PRINTING--FOR DEBUG
    cout << "File header:" << endl;
    for (int i = 0; i < fileHeader.size(); i++) { cout << fileHeader.at(i) << " "; }
    cout << endl;

    // generate funnel format
    cout << "Generating funnel format..." << endl;
    allBlocks = generate_block(gwasFileName, blockSize);
    //PRINTING--FOR DEBUG
    cout << "ALL BLOCKS:" << endl;
    for (int i = 0; i < allBlocks.size(); i++) {
        vector<string> currBlock = allBlocks.at(i);
        cout << "Block " << i << endl;
        for (int j = 0; j < currBlock.size(); j++) {
            cout << currBlock.at(j) << endl;
        }
        cout << endl;
    }
    cout << endl;

    // compress funnel format


    return 0;
}
