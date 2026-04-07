#include "10000/src/10163_color_paper.h"

#include "test_headers/test_helper.h"

class ColorPaperTest : public IOTestFixture<ColorPaper> {};

TEST_F(ColorPaperTest, SimpleCase) {
  RunTest("2\n0 0 10 10\n2 2 6 6", "64\n36\n");
}

TEST_F(ColorPaperTest, SimpleCase2) {
  RunTest("3\n0 2 10 10\n7 9 8 4\n8 4 10 6", "81\n25\n60\n");
}

TEST_F(ColorPaperTest, SimpleCase3) {
  RunTest("4\n0 2 10 10\n7 9 8 4\n8 4 10 6\n6 0 12 10", "62\n24\n0\n120\n");
}
