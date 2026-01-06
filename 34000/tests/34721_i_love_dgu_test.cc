#include "34000/src/34721_i_love_dgu.h"

#include "test_headers/test_helper.h"

class ILoveDguTest : public IOTestFixture<ILoveDgu> {};

TEST_F(ILoveDguTest, SampleCase) {
  RunTest("3", "I love DGU\nI love DGU\nI love DGU\n");
}
