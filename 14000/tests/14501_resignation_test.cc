#include "14000/src/14501_resignation.h"

#include "test_headers/test_helper.h"

class ResignationTest : public IOTestFixture<Resignation> {};

TEST_F(ResignationTest, SampleCase) {
  RunTest("7\n3 10\n5 20\n1 10\n1 20\n2 15\n4 40\n2 200", "45");
}

TEST_F(ResignationTest, SampleCase2) {
  RunTest("10\n1 1\n1 2\n1 3\n1 4\n1 5\n1 6\n1 7\n1 8\n1 9\n1 10", "55");
}

TEST_F(ResignationTest, SampleCase3) {
  RunTest("10\n5 10\n5 9\n5 8\n5 7\n5 6\n5 10\n5 9\n5 8\n5 7\n5 6", "20");
}

TEST_F(ResignationTest, SampleCase4) {
  RunTest("10\n5 50\n4 40\n3 30\n2 20\n1 10\n1 10\n2 20\n3 30\n4 40\n5 50",
          "90");
}
