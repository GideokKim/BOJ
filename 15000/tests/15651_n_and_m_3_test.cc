#include "15000/src/15651_n_and_m_3.h"

#include "test_headers/test_helper.h"

class NAndM3Test : public IOTestFixture<NAndM3> {};

TEST_F(NAndM3Test, SampleCase) { RunTest("3 1", "1 \n2 \n3 \n"); }

TEST_F(NAndM3Test, SampleCase2) {
  RunTest("4 2",
          "1 1 \n1 2 \n1 3 \n1 4 \n2 1 \n2 2 \n2 3 \n2 4 \n3 1 \n3 2 \n3 3 \n3 "
          "4 \n4 1 \n4 2 \n4 3 \n4 4 \n");
}

TEST_F(NAndM3Test, SampleCase3) {
  RunTest(
      "3 3",
      "1 1 1 \n1 1 2 \n1 1 3 \n1 2 1 \n1 2 2 \n1 2 3 \n1 3 1 \n1 3 2 \n1 3 "
      "3 \n2 1 1 \n2 1 2 \n2 1 3 \n2 2 1 \n2 2 2 \n2 2 3 \n2 3 1 \n2 3 2 \n2 "
      "3 3 \n3 1 1 \n3 1 2 \n3 1 3 \n3 2 1 \n3 2 2 \n3 2 3 \n3 3 1 \n3 3 2 \n3 "
      "3 3 \n");
}