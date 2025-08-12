#include "15000/src/15652_n_and_m_4.h"

#include "test_headers/test_helper.h"

class NAndM4Test : public IOTestFixture<NAndM4> {};

TEST_F(NAndM4Test, SampleCase) { RunTest("3 1", "1 \n2 \n3 \n"); }

TEST_F(NAndM4Test, SampleCase2) {
  RunTest("4 2",
          "1 1 \n1 2 \n1 3 \n1 4 \n2 2 \n2 3 \n2 4 \n3 3 \n3 4 \n4 4 \n");
}

TEST_F(NAndM4Test, SampleCase3) {
  RunTest("3 3",
          "1 1 1 \n1 1 2 \n1 1 3 \n1 2 2 \n1 2 3 \n1 3 3 \n2 2 2 \n2 2 3 \n2 "
          "3 3 \n3 3 3 \n");
}