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
BOOST_AUTO_TEST_SUITE(testSplitString)

    BOOST_AUTO_TEST_CASE(Test1)
    {
        vector<string> ss;
        ss.push_back("1");
        ss.push_back("11063");
        ss.push_back("T");
        ss.push_back("G");
        ss.push_back("4.213e-05");
        ss.push_back("4.799e-05");
        ss.push_back("-1.334e+00");
        ss.push_back("9.999e+00");
        ss.push_back("8.938e-01");
        ss.push_back("true");
        vector<string> testSS = splitString("1\t11063\tT\tG\t4.213e-05\t4.799e-05\t-1.334e+00\t9.999e+00\t8.938e-01\ttrue", '\t');

        BOOST_CHECK(ss==testSS);
    }

BOOST_AUTO_TEST_SUITE_END()

// int countNumberColumns(string gwasFileName, char delim);
BOOST_AUTO_TEST_SUITE(testCountNumberColumns)

    BOOST_AUTO_TEST_CASE(testTabDelim)
    {
        string oneColTab = "../data/c1-r10-tab.tsv";
        string fiveColTab = "../data/c5-r10-tab.tsv";
        string tenColTab = "../data/c10-r10-tab.tsv";
        char tab = '\t';

        int oneNC = countNumberColumns(oneColTab, tab);
        int fiveNC = countNumberColumns(fiveColTab, tab);
        int tenNC = countNumberColumns(tenColTab, tab);

        BOOST_CHECK(oneNC==1);
        BOOST_CHECK(fiveNC==5);
        BOOST_CHECK(tenNC==10);
    }

    BOOST_AUTO_TEST_CASE(testTabSpace)
    {
        string oneColSpace = "../data/c1-r10-space.tsv";
        string fiveColSpace = "../data/c5-r10-space.tsv";
        string tenColSpace = "../data/c10-r10-space.tsv";

        char space = ' ';

        int oneNC = countNumberColumns(oneColSpace, space);
        int fiveNC = countNumberColumns(fiveColSpace, space);
        int tenNC = countNumberColumns(tenColSpace, space);

        BOOST_CHECK(oneNC==1);
        BOOST_CHECK(fiveNC==5);
        BOOST_CHECK(tenNC==10);
    }

BOOST_AUTO_TEST_SUITE_END()

// vector<string> returnFileHeader(string gwasFileName, int numCols, char delim);



