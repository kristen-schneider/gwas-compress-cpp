#include <iostream>
#include <string>
#include <vector>
#include "funnel_format.h"
#include "utils.h"
using namespace std;


/// probably wrong way to define this
char delim = '\t';
int blockSize = 3;
///

int main() {
    string gwasFileName = "../data/ten.tsv";
    int numCols;
    vector<string> fileHeader;
    vector<vector<string>> allBlocks;

    // get information needed for compression
    numCols = countNumberColumns(gwasFileName, delim);
    cout << "Getting starter data..." << endl;
    cout << "Number of columns: " << numCols << endl;
    fileHeader = returnFileHeader(gwasFileName, numCols, delim);
    cout << "File header:" << endl;
    for (int i = 0; i < fileHeader.size(); i++) { cout << fileHeader.at(i) << " "; }
    cout << endl;

    // generate funnel format
    cout << "Generating funnel format..." << endl;
    allBlocks = generate_block(gwasFileName, blockSize);

    cout << "Blocks:" << endl;
    for (int i = 0; i < allBlocks.size(); i++) {
        vector<string> currBlock = allBlocks.at(i);
        cout << "Block " << i;
        for (int j = 0; j < numCols; j++) {
            cout << currBlock.at(j);
        }
    }
    cout << endl;

    // compress funnel format


    return 0;
}
