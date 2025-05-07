#include "13000/src/13301_tile_decoration.h"

#include "test_headers/test_helper.h"

class TileDecorationTest : public IOTestFixture<TileDecoration> {};

TEST_F(TileDecorationTest, SampleCase) { RunTest("5", "26"); }

TEST_F(TileDecorationTest, SampleCase2) { RunTest("6", "42"); }

TEST_F(TileDecorationTest, SampleCase3) { RunTest("1", "4"); }

TEST_F(TileDecorationTest, SampleCase4) { RunTest("2", "6"); }