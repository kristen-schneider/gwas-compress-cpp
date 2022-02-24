////
//// Created by Kristen Schneider on 1/22/22.
////

#define BOOST_TEST_DYN_LINK
#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE Main
#endif
#include <boost/test/unit_test.hpp>
#include <iostream>
#include <string>
#include <vector>
#include "../src/utils.h"

using namespace std;

// vector<string> splitString(string s, char delim);
BOOST_AUTO_TEST_SUITE(test_utils_suite)

    BOOST_AUTO_TEST_CASE(TestSS)
    {
        vector<string> ss;
        ss.push_back("Hello");
        ss.push_back("World!");
        vector<string> testSS = splitString("Hello World!", ' ');
        for(int s = 0; s < ss.size(); s++){cout << ss.at(s);}
        for(int s = 0; s < testSS.size(); s++){cout << testSS.at(s);}
        BOOST_CHECK(ss==testSS);
        BOOST_CHECK(0<1);

    }

BOOST_AUTO_TEST_SUITE_END()
//void testSplitString(void){
//    vector<string> ss = {"Hello", "World!"};
//    vector<string> testSS = splitString("Hello World!", ' ');
//    cout << "ss" << endl;
//    //testing here
//
//}
//
//// int countNumberColumns(string gwasFileName, char delim);
//
//
//// vector<string> returnFileHeader(string gwasFileName, int numCols, char delim);
//
//
//
