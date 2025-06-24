#include "10000/src/10867_sort_except_repeated_numbers.h"

#include "test_headers/test_helper.h"

class SortExceptRepeatedNumbersTest
    : public IOTestFixture<SortExceptRepeatedNumbers> {};

TEST_F(SortExceptRepeatedNumbersTest, SimpleCase) {
  RunTest("10\n1 4 2 3 1 4 2 3 1 2", "1 2 3 4 ");
}
