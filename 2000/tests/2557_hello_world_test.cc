#include "2000/src/2557_hello_world.h"

#include "test_headers/test_helper.h"

class HelloWorldTest : public IOTestFixture<HelloWorld> {};

TEST_F(HelloWorldTest, SampleCase) { RunTest("", "Hello World!"); }
