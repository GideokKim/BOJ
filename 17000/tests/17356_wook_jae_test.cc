#include "17000/src/17356_wook_jae.h"

#include "test_headers/test_helper.h"

class WookJaeTest : public IOTestFixture<WookJae> {};

TEST_F(WookJaeTest, SimpleCase) { RunTest("2000 1800", "0.759747"); }

TEST_F(WookJaeTest, SimpleCase2) { RunTest("1655 3015", "0.000398"); }
