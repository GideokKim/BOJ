#include "1000/src/1920_find_numbers.h"

#include "test_headers/test_helper.h"

class FindNumbersTest : public IOTestFixture<FindNumbers> {};

TEST_F(FindNumbersTest, SampleCase) {
  RunTest("5\n4 1 5 2 3\n5\n1 3 7 9 5\n", "1\n1\n0\n0\n1\n");
}
