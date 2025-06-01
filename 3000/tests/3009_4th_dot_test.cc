#include "3000/src/3009_4th_dot.h"

#include "test_headers/test_helper.h"

class FourthDotTest : public IOTestFixture<FourthDot> {};

TEST_F(FourthDotTest, SampleCase) { RunTest("5 5\n5 7\n7 5", "7 7"); }

TEST_F(FourthDotTest, SampleCase2) { RunTest("30 20\n10 10\n10 20", "30 10"); }
