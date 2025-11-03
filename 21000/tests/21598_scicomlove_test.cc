#include "21000/src/21598_scicomlove.h"

#include "test_headers/test_helper.h"

class SciComLoveTest : public IOTestFixture<SciComLove> {};

TEST_F(SciComLoveTest, SampleCase) { RunTest("1", "SciComLove\n"); }

TEST_F(SciComLoveTest, SampleCase2) {
  RunTest("2", "SciComLove\nSciComLove\n");
}