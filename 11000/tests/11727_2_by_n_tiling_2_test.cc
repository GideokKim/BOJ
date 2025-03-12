#include "11000/src/11727_2_by_n_tiling_2.h"

#include "test_headers/test_helper.h"

class TwoByNTiling2Test : public IOTestFixture<TwoByNTiling2> {};

TEST_F(TwoByNTiling2Test, SampleCase) { RunTest("2", "3"); }

TEST_F(TwoByNTiling2Test, SampleCase2) { RunTest("8", "171"); }

TEST_F(TwoByNTiling2Test, SampleCase3) { RunTest("12", "2731"); }