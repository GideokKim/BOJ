#include "10000/src/10989_sorting_numbers_3.h"

#include "test_headers/test_helper.h"

class SortingNumbers3Test : public IOTestFixture<SortingNumbers3> {};

TEST_F(SortingNumbers3Test, SimpleCase) {
  RunTest("10\n5\n2\n3\n1\n4\n2\n3\n5\n1\n7", "1\n1\n2\n2\n3\n3\n4\n5\n5\n7\n");
}
