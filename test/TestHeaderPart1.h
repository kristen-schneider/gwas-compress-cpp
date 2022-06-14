#ifndef TestHeaderPart1_h
#define TestHeaderPart1_h

#include <cppunit/extensions/HelperMacros.h>

class HeaderPart1Test : public CPPUNIT_NS::TestFixture{
    CPPUNIT_TEST_SUITE( HeaderPart1Test );
    CPPUNIT_TEST( testMagicNumber );
    CPPUNIT_TEST( testVersionNumber );
    CPPUNIT_TEST_SUITE_END();

    public:
    void setUp();
    void tearDown();
    
    void testMagicNumber();
    void testVersionNumber();
};
#endif
