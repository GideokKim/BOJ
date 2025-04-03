#include "15000/src/15161_grass_cutting.h"

#include "test_headers/test_helper.h"

class GrassCuttingTest : public IOTestFixture<GrassCutting> {};

TEST_F(GrassCuttingTest, SampleCase) {
  RunTest("1\n1 2 3 4 5 6",
          "1 1 1 1 1 1 1 1 1 1 \n"
          "1 1 1 1 1 1 1 1 1 1 \n"
          "1 1 1 1 1 1 1 1 1 1 \n"
          "2 2 2 1 1 1 2 2 2 2 \n"
          "2 2 2 1 1 1 2 2 2 2 \n"
          "2 2 2 1 1 1 2 2 2 2 \n"
          "2 2 2 1 1 1 2 2 2 2 \n"
          "2 2 2 1 1 1 2 2 2 2 \n"
          "2 2 2 1 1 1 2 2 2 2 \n"
          "2 2 2 1 1 1 2 2 2 2 \n");
}

TEST_F(GrassCuttingTest, SampleCase2) {
  RunTest("2\n1 2 3 4 5 6\n1 3 5 4 8 10",
          "1 1 1 1 1 1 1 1 1 1 \n"
          "2 2 2 1 2 2 2 1 2 1 \n"
          "1 1 1 1 1 1 1 1 1 1 \n"
          "3 3 3 1 2 2 3 1 3 1 \n"
          "1 1 1 1 1 1 1 1 1 1 \n"
          "3 3 3 1 2 2 3 1 3 1 \n"
          "3 3 3 1 2 2 3 1 3 1 \n"
          "3 3 3 1 2 2 3 1 3 1 \n"
          "3 3 3 1 2 2 3 1 3 1 \n"
          "3 3 3 1 2 2 3 1 3 1 \n");
}