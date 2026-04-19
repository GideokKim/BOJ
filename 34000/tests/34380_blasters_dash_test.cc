#include "34000/src/34380_blasters_dash.h"

#include "test_headers/test_helper.h"

class BlastersDashTest : public IOTestFixture<BlastersDash> {};

TEST_F(BlastersDashTest, SampleCase) { RunTest("55 6\n42\n294", "124"); }
