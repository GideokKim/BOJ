#include "15000/src/15655_n_and_m_6.h"

#include "test_headers/test_helper.h"

class NAndM6Test : public IOTestFixture<NAndM6> {};

TEST_F(NAndM6Test, SampleCase) { RunTest("3 1\n4 5 2", "2 \n4 \n5 \n"); }

TEST_F(NAndM6Test, SampleCase2) {
  RunTest("4 2\n9 8 7 1", "1 7 \n1 8 \n1 9 \n7 8 \n7 9 \n8 9 \n");
}

TEST_F(NAndM6Test, SampleCase3) {
  RunTest("4 4\n1231 1232 1233 1234", "1231 1232 1233 1234 \n");
}