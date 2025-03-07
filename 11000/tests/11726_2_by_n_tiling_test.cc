#include "11000/src/11726_2_by_n_tiling.h"

#include "test_headers/test_helper.h"

class TwoByNTilingTest : public IOTestFixture<TwoByNTiling> {};

TEST_F(TwoByNTilingTest, SampleCase) { RunTest("2", "2"); }

TEST_F(TwoByNTilingTest, SampleCase2) { RunTest("9", "55"); }