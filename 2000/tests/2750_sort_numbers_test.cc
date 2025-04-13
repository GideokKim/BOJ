#include "2000/src/2750_sort_numbers.h"

#include "test_headers/test_helper.h"

class SortNumbersTest : public IOTestFixture<SortNumbers> {};

TEST_F(SortNumbersTest, SampleCase) {
  RunTest("5\n5\n2\n3\n4\n1", "1\n2\n3\n4\n5\n");
}
