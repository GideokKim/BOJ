#include "15000/src/15666_n_and_m_12.h"

#include "test_headers/test_helper.h"

class NAndM12Test : public IOTestFixture<NAndM12> {};

TEST_F(NAndM12Test, SampleCase) { RunTest("3 1\n4 4 2", "2 \n4 \n"); }

TEST_F(NAndM12Test, SampleCase2) {
  RunTest("4 2\n9 7 9 1", "1 1 \n1 7 \n1 9 \n7 7 \n7 9 \n9 9 \n");
}

TEST_F(NAndM12Test, SampleCase3) {
  RunTest("4 4\n1 1 2 2", "1 1 1 1 \n1 1 1 2 \n1 1 2 2 \n1 2 2 2 \n2 2 2 2 \n");
}