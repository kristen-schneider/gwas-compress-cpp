#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

#include "headerPart1.h"
#include "TestHeaderPart1.h"
#include "utils.h"
#include "TestUtils.h"

int main(int argc, char* argv[]){
    
    // Get the top level suite from the registry
    CPPUNIT_NS::Test *suite = CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest();

    CppUnit::TextUi::TestRunner runner;
    runner.addTest(suite);
    bool wasSucessful = runner.run();

    return wasSucessful ? 0 : 1;
}
