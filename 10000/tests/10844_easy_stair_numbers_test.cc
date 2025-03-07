#include "10000/src/10844_easy_stair_numbers.h"

#include "test_headers/test_helper.h"

class EasyStairNumbersTest : public IOTestFixture<EasyStairNumbers> {};

TEST_F(EasyStairNumbersTest, SimpleCase) { RunTest("1\n", "9"); }

TEST_F(EasyStairNumbersTest, SampleCase2) { RunTest("2\n", "17"); }

TEST_F(EasyStairNumbersTest, SampleCase3) { RunTest("100\n", "18404112"); }
