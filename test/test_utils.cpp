//
// Created by Kristen Schneider on 1/22/22.
//

using namespace std;

#include <iostream>
#include <vector>
#include <string>
#include "../src/utils.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
// Expect two strings not to be equal.
EXPECT_STRNE("hello", "world");
// Expect equality.
EXPECT_EQ(7 * 6, 42);
}


//// vector<string> splitString(string s, char delim);
//void testSplitString(void){
//    vector<string> ss = {"Hello", "World!"};
//    vector<string> testSS = splitString("Hello World!", ' ');
//    cout << "ss" << endl;
//}

// int countNumberColumns(string gwasFileName, char delim);


// vector<string> returnFileHeader(string gwasFileName, int numCols, char delim);



