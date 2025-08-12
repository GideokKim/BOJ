#include "15000/src/15650_n_and_m_2.h"

#include "test_headers/test_helper.h"

class NAndM2Test : public IOTestFixture<NAndM2> {};

TEST_F(NAndM2Test, SampleCase) { RunTest("3 1", "1 \n2 \n3 \n"); }

TEST_F(NAndM2Test, SampleCase2) {
  RunTest("4 2", "1 2 \n1 3 \n1 4 \n2 3 \n2 4 \n3 4 \n");
}

TEST_F(NAndM2Test, SampleCase3) { RunTest("4 4", "1 2 3 4 \n"); }