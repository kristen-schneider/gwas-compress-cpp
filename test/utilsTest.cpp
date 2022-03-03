//
// Created by Kristen Schneider on 3/2/22.
//

#include <utils.h>
#include "gtest/gtest.h"
#include <vector>

using namespace std;

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

TEST(CountNumberColumnsTest, OverOne){
    char delim = '\t';
    string gwasFile = "data/c10-r11-tab.tsv";
    int numCols = 10;

    int test_numCols = countNumberColumns(gwasFile, delim);
    EXPECT_EQ(numCols, test_numCols);

}