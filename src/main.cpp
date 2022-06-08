#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "configReader.h"
//#include "funnelFormat.h"
//#include "funnelFormatCompress.h"
//#include "utils.h"
//#include "gzipWrapper.h"

using namespace std;

int main(){
    string configTxt = "/home/krsc0813/gwas-compress-cpp/config.txt";
    map <string, string> configurations;
    configurations = read_config_file(configTxt);
    return 0;
}

//int main_() {
//
//    /*
//    0. get arguments from user to run compression according to their preferences
//    1. gets beginning of header (magic number, version, delimiter, column labels, column types, num columns, gzip header)
//    2. generates funnel format (list of blocks)
//    3. compress data and get second half of header *depends on input data type and compression data type
//    4. compress full header
//    5. write compressed header
//    6. write compressed data
//    */
//
//    // 0 & 1 setting space for compression header
//    // 0: input info should be read in from config file (
//    // 1: (delimiter, blockSize, gwasHeader, columnTypes, numColumns)
//    string gwasFileName = "../data/c10-r1-tab.tsv";
//
//    char delimiter = '\t';
//    int blockSize = 3;
//    vector<string> gwasHeader;
//    vector<int> columnTypes; // 0-int, 1-float, 2-string, 3-bool
//    int numColumns;
//    string gzipHeader;
//
//    cout << "Getting starter data..." << endl;
//    numColumns = countNumberColumns(gwasFileName, delimiter);
//    gwasHeader = returnFileHeader(gwasFileName, numColumns, delimiter);
////    gzipHeader = returnGzipHeader();
//
//
//    // 2: generates funnel format (vector of vector of strings)
//    cout << endl << "Generating funnel format..." << endl;
//
//    vector<vector<vector<string>>> allBlocks;
//
//    allBlocks = generate_block(gwasFileName, blockSize, delimiter, numColumns);
////    for(int b = 0; b < allBlocks.size(); b++){
////        vector<vector<string>> currBlock = allBlocks.at(b);
////        for(int c = 0; c < numColumns; c++){
////            vector<string> currCol = currBlock.at(c);
////            for(int r = 0; r < currCol.size(); r++){
////                cout << currCol.at(r) << ",";
////            }
////            cout << " ";
////        }
////        cout << endl;
////    }
//
//    // 3: compress funnel format, return second half of header
//    cout << endl << "Compressing with gzip..." << endl;
//
//    vector<string> allCompressedBlocks;
//
////    allCompressedBlocks = compressAllBlocks(allBlocks, numColumns, blockSize);
//
//    return 0;
//}
