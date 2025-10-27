#include "2000/src/2490_yutnori.h"

#include "test_headers/test_helper.h"

class YutnoriTest : public IOTestFixture<Yutnori> {};

TEST_F(YutnoriTest, SampleCase) {
  RunTest("0 1 0 1\n1 1 1 0\n0 0 1 1", "B\nA\nB\n");
}
