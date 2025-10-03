#include "14000/src/14910_ascent_load.h"

#include "test_headers/test_helper.h"

class AscentLoadTest : public IOTestFixture<AscentLoad> {};

TEST_F(AscentLoadTest, SampleCase) { RunTest("7", "Good"); }

TEST_F(AscentLoadTest, SampleCase2) { RunTest("1 2 3 4 5", "Good"); }

TEST_F(AscentLoadTest, SampleCase3) { RunTest("1 2 2 2 4", "Good"); }

TEST_F(AscentLoadTest, SampleCase4) { RunTest("2 1", "Bad"); }

TEST_F(AscentLoadTest, SampleCase5) { RunTest("1 2 3 2 1", "Bad"); }