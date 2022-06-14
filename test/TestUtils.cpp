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
    CPPUNIT_ASSERT_EQUAL(1, easyOne()); 
    CPPUNIT_ASSERT_EQUAL(1, easyOne());
}
