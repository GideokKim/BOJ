#include "2000/src/2959_turtle.h"

#include "test_headers/test_helper.h"

class TurtleTest : public IOTestFixture<Turtle> {};

TEST_F(TurtleTest, SampleCase) { RunTest("1 2 3 4", "3"); }

TEST_F(TurtleTest, SampleCase2) { RunTest("4 4 3 4", "12"); }
