//
// Created by Kristen Schneider on 3/2/22.
//

#include <utils.h>
#include "gtest/gtest.h"
#include <vector>

using namespace std;

// vector<string> splitString(string s, char delim)
TEST(SplitStringTest, tab){
    char delim = '\t';
    string s = "Hello\tWorld";
    vector<string> ss = {"Hello", "World"};

    vector<string> test_s = splitString(s, delim);
    for (int i = 0; i < ss.size(); ++i) {
        EXPECT_EQ(ss[i], test_s[i]) << "Vectors differ at index " << i;
    }
}

TEST(SplitStringTest, space){
    char delim = ' ';
    string s = "Hello World";
    vector<string> ss = {"Hello", "World"};

    vector<string> test_s = splitString(s, delim);
    for (int i = 0; i < ss.size(); ++i) {
        EXPECT_EQ(ss[i], test_s[i]) << "Vectors differ at index " << i;
    }
}

// int countNumberColumns(string gwasFileName, char delim)
TEST(CountNumberColumnsTest, normal){
    char delim = '\t';
    string tenFile = "/Users/kristen/CLionProjects/gwas-cpp/data/c10-r10-tab.tsv";
    string fiveFile = "/Users/kristen/CLionProjects/gwas-cpp/data/c5-r10-tab.tsv";
    string oneFile = "/Users/kristen/CLionProjects/gwas-cpp/data/c1-r10-tab.tsv";

    int tenCols = 10;
    int fiveCols = 5;
    int oneCol = 1;

    int test_tenCols = countNumberColumns(tenFile, delim);
    int test_fiveCols = countNumberColumns(fiveFile, delim);
    int test_oneCol = countNumberColumns(oneFile, delim);

    EXPECT_EQ(tenCols, test_tenCols);
    EXPECT_EQ(fiveCols, test_fiveCols);
    EXPECT_EQ(oneCol, test_oneCol);
}

// vector<string> returnFileHeader(string gwasFileName, int numCols, char delim)
TEST(ReturnFileHeaderTest, normal){
    vector<string> fileHeader = {"chr", "pos", "ref", "alt", }
}