#include "31000/src/31607_sum_checker.h"

#include "test_headers/test_helper.h"

class SumCheckerTest : public IOTestFixture<SumChecker> {};

TEST_F(SumCheckerTest, SampleCase) { RunTest("3\n5\n2", "1"); }

TEST_F(SumCheckerTest, SampleCase2) { RunTest("2\n3\n4", "0"); }

TEST_F(SumCheckerTest, SampleCase3) { RunTest("100\n50\n50", "1"); }

TEST_F(SumCheckerTest, SampleCase4) { RunTest("1\n1\n1", "0"); }