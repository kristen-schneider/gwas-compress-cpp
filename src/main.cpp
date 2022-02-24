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
    cout << "Compressing with gzip..." << endl;

    string k = "kristenalskjglaksj";
    string compressedk = gzipCompress(k);
    string decompressedk = gzipDecompress(compressedk);
    string firstk = compressedk.substr(0,10);
    string list = compressedk.substr(0);
    string headerk = returnGzipHeader(compressedk);
    string brokenk1 = compressedk.substr(10);
    string brokenk2 = compressedk.erase(0,10);
    string restoredk = headerk + brokenk1;

    cout << (headerk).compare(firstk) << endl;
    cout << (firstk).compare(headerk) << endl;
    cout << (brokenk1).compare(brokenk2) << endl;
    cout << (compressedk).compare(restoredk) << endl;
    cout << (list).compare(restoredk) << endl;



    return 0;
}
