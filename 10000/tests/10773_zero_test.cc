#include "10000/src/10773_zero.h"

#include "test_headers/test_helper.h"

class ZeroTest : public IOTestFixture<Zero> {};

TEST_F(ZeroTest, SampleCase) { RunTest("4\n3\n0\n4\n0\n", "0"); }

TEST_F(ZeroTest, SampleCase2) {
  RunTest("10\n1\n3\n5\n4\n0\n0\n7\n0\n0\n6\n", "7");
}
