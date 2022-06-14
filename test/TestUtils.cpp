#include <cppunit/config/SourcePrefix.h>
#include <iostream>
#include <string>

#include "TestUtils.h"
#include "utils.h"

void
UtilsTest::setUp(){}

void
UtilsTest::tearDown(){}

CPPUNIT_TEST_SUITE_REGISTRATION( UtilsTest );

void UtilsTest::testDataType(){
    // data that should be encoded as integers
    CPPUNIT_ASSERT_EQUAL(1, get_data_type("1"));
    CPPUNIT_ASSERT_EQUAL(1, get_data_type("11063"));

    // data that should be encoded as floats
    CPPUNIT_ASSERT_EQUAL(2, get_data_type("4.213e-05"));
    CPPUNIT_ASSERT_EQUAL(2, get_data_type("0.771"));
    
    // data that should be encoded as strings
    CPPUNIT_ASSERT_EQUAL(3, get_data_type("A"));
    CPPUNIT_ASSERT_EQUAL(3, get_data_type("ACTG"));
    CPPUNIT_ASSERT_EQUAL(3, get_data_type("X"));
    
    // data that should be encoded as bools
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("true"));
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("false"));
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("false"));
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("True"));
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("False"));
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("TRUE"));
    CPPUNIT_ASSERT_EQUAL(4, get_data_type("FALSE"));
}
