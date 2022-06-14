#ifndef TestUtils_h
#define TestUtils_h

#include <cppunit/extensions/HelperMacros.h>

class UtilsTest : public CPPUNIT_NS::TestFixture{
    CPPUNIT_TEST_SUITE( UtilsTest );
    CPPUNIT_TEST( testDataType );
    CPPUNIT_TEST_SUITE_END();

    public:
    void setUp();
    void tearDown();
    
    void testDataType();
};
#endif
