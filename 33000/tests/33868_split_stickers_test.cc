#include "33000/src/33868_split_stickers.h"

#include "test_headers/test_helper.h"

class SplitStickersTest : public IOTestFixture<SplitStickers> {};

TEST_F(SplitStickersTest, SampleCase) {
  RunTest("3\n240 626\n22 1906\n417 1103", "6");
}

TEST_F(SplitStickersTest, SampleCase2) { RunTest("2\n876 1254\n428 300", "7"); }
