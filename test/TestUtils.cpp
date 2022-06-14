#include <cppunit/config/SourcePrefix.h>
#include "../include/utils.h"
#include "TestUtils.h"

#include <iostream>
#include <string>

void
UtilsTest::setUp(){}

void
UtilsTest::tearDown(){}

CPPUNIT_TEST_SUITE_REGISTRATION( UtilsTest );

void UtilsTest::testDataType(){
    CPPUNIT_ASSERT_EQUAL(1, easyOne()) 
}
