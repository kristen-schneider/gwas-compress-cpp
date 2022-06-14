#include <cppunit/config/SourcePrefix.h>
#include <iostream>
#include <string>

#include "TestHeaderPart1.h"
#include "headerPart1.h"

void
HeaderPart1Test::setUp(){}

void
HeaderPart1Test::tearDown(){}

CPPUNIT_TEST_SUITE_REGISTRATION( HeaderPart1Test );

void HeaderPart1Test::testMagicNumber(){
    CPPUNIT_ASSERT_EQUAL(1, magic_number());
}

void HeaderPart1Test::testVersionNumber(){
    CPPUNIT_ASSERT_EQUAL(1, version_number());
}
