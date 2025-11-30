#include "11000/src/11170_number_of_zero.h"

#include "test_headers/test_helper.h"

class NumberOfZeroTest : public IOTestFixture<NumberOfZero> {};

TEST_F(NumberOfZeroTest, SampleCase) {
  RunTest("3\n0 10\n33 1005\n1 4", "2\n199\n0\n");
}
