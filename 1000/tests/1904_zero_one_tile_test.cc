#include "1000/src/1904_zero_one_tile.h"

#include "test_headers/test_helper.h"

class ZeroOneTileTest : public IOTestFixture<ZeroOneTile> {};

TEST_F(ZeroOneTileTest, SampleCase) { RunTest("4\n", "5"); }
