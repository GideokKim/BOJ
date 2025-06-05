#include "2000/src/2751_sort_numbers_2.h"

#include "test_headers/test_helper.h"

class SortNumbers2Test : public IOTestFixture<SortNumbers2> {};

TEST_F(SortNumbers2Test, SampleCase) {
  RunTest("5\n5\n2\n3\n4\n1", "1\n2\n3\n4\n5\n");
}
