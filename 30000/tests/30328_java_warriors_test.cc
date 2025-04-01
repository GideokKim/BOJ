#include "30000/src/30328_java_warriors.h"

#include "test_headers/test_helper.h"

class JavaWarriorsTest : public IOTestFixture<JavaWarriors> {};

TEST_F(JavaWarriorsTest, SimpleCase) { RunTest("1", "4000"); }
