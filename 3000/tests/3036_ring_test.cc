#include "3000/src/3036_ring.h"

#include "test_headers/test_helper.h"

class RingTest : public IOTestFixture<Ring> {};

TEST_F(RingTest, SampleCase) { RunTest("3\n8 4 2", "2/1\n4/1\n"); }

TEST_F(RingTest, SampleCase2) { RunTest("4\n12 3 8 4", "4/1\n3/2\n3/1\n"); }

TEST_F(RingTest, SampleCase3) {
  RunTest("4\n300 1 1 300", "300/1\n300/1\n1/1\n");
}
