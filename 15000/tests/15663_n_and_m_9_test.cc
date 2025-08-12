#include "15000/src/15663_n_and_m_9.h"

#include "test_headers/test_helper.h"

class NAndM9Test : public IOTestFixture<NAndM9> {};

TEST_F(NAndM9Test, SampleCase) { RunTest("3 1\n4 4 2", "2 \n4 \n"); }

TEST_F(NAndM9Test, SampleCase2) {
  RunTest("4 2\n9 7 9 1", "1 7 \n1 9 \n7 1 \n7 9 \n9 1 \n9 7 \n9 9 \n");
}

TEST_F(NAndM9Test, SampleCase3) { RunTest("4 4\n1 1 1 1", "1 1 1 1 \n"); }