#include "15000/src/15649_n_and_m_1.h"

#include "test_headers/test_helper.h"

class NAndM1Test : public IOTestFixture<NAndM1> {};

TEST_F(NAndM1Test, SampleCase) { RunTest("3 1", "1 \n2 \n3 \n"); }

TEST_F(NAndM1Test, SampleCase2) {
  RunTest("4 2",
          "1 2 \n1 3 \n1 4 \n2 1 \n2 3 \n2 4 \n3 1 \n3 2 \n3 4 \n4 1 \n4 2 \n4 "
          "3 \n");
}

TEST_F(NAndM1Test, SampleCase3) {
  RunTest("4 4",
          "1 2 3 4 \n1 2 4 3 \n1 3 2 4 \n1 3 4 2 \n1 4 2 3 \n1 4 3 2 \n2 1 3 4 "
          "\n2 1 4 3 \n2 3 1 4 \n2 3 4 1 \n2 4 1 3 \n2 4 3 1 \n3 1 2 4 \n3 1 4 "
          "2 \n3 2 1 4 \n3 2 4 1 \n3 4 1 2 \n3 4 2 1 \n4 1 2 3 \n4 1 3 2 \n4 2 "
          "1 3 \n4 2 3 1 \n4 3 1 2 \n4 3 2 1 \n");
}