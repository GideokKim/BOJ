#include "1000/src/1012_organic_cabbage.h"

#include "test_headers/test_helper.h"

class OrganicCabbageTest : public IOTestFixture<OrganicCabbage> {};

TEST_F(OrganicCabbageTest, SampleCase) {
  RunTest(
      "2\n10 8 17\n0 0\n1 0\n1 1\n4 2\n4 3\n4 5\n2 4\n3 4\n7 4\n8 4\n9 4\n7 "
      "5\n8 5\n9 5\n7 6\n8 6\n9 6\n10 10 1\n5 5",
      "5\n1\n");
}

TEST_F(OrganicCabbageTest, SampleCase2) {
  RunTest("1\n5 3 6\n0 2\n1 2\n2 2\n3 2\n4 2\n4 0", "2\n");
}
