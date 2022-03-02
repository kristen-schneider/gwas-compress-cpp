//
// Created by Kristen Schneider on 3/2/22.
//
#include "gtest/gtest.h"
using namespace std;

int main(int argc, char **argv){
    cout << "TESTING" << endl;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
