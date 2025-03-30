#include "20000/src/20976_the_second_largest_integer.h"

#include "test_headers/test_helper.h"

class TheSecondLargestIntegerTest
    : public IOTestFixture<TheSecondLargestInteger> {};

TEST_F(TheSecondLargestIntegerTest, SimpleCase) { RunTest("7 5 3", "5"); }

TEST_F(TheSecondLargestIntegerTest, SimpleCase2) { RunTest("1 3 3", "3"); }

TEST_F(TheSecondLargestIntegerTest, SimpleCase3) {
  RunTest("100 100 100", "100");
}

TEST_F(TheSecondLargestIntegerTest, SimpleCase4) { RunTest("29 83 1", "29"); }
