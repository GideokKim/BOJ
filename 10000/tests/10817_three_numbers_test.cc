#include "10000/src/10817_three_numbers.h"

#include "test_headers/test_helper.h"

class ThreeNumbersTest : public IOTestFixture<ThreeNumbers> {};

TEST_F(ThreeNumbersTest, SampleCase) { RunTest("20 30 10\n", "20"); }

TEST_F(ThreeNumbersTest, SampleCase2) { RunTest("30 30 10\n", "30"); }

TEST_F(ThreeNumbersTest, SampleCase3) { RunTest("40 40 40\n", "40"); }

TEST_F(ThreeNumbersTest, SampleCase4) { RunTest("20 10 10\n", "10"); }
