#include "2000/src/2501_divisors.h"

#include "test_headers/test_helper.h"

class DivisorsTest : public IOTestFixture<Divisors> {};

TEST_F(DivisorsTest, SampleCase) { RunTest("6 3", "3"); }

TEST_F(DivisorsTest, SampleCase2) { RunTest("25 4", "0"); }

TEST_F(DivisorsTest, SampleCase3) { RunTest("2735 1", "1"); }
