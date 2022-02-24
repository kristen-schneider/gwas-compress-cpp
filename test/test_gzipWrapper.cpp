//
// Created by Kristen Schneider on 2/24/22.
//
#define BOOST_TEST_DYN_LINK
#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE Main
#endif

#include <boost/test/unit_test.hpp>
#include <iostream>
#include <string>
#include <vector>
#include "../src/gzipWrapper.h"

using namespace std;

// vector<string> splitString(string s, char delim);
BOOST_AUTO_TEST_SUITE(testReturnGzipHeader)

    BOOST_AUTO_TEST_CASE(Test1)
    {
        string gzipHeader = "\x1f\x8b\x08\x00\x00\x00\x00\x00\x02\xff";
        string testGzipHeader = returnGzipHeader();

        BOOST_CHECK(gzipHeader==testGzipHeader);
    }

BOOST_AUTO_TEST_SUITE_END()

