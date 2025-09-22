#include "30000/src/30676_what_color_is_this_star.h"

#include "test_headers/test_helper.h"

class WhatColorIsThisStarTest : public IOTestFixture<WhatColorIsThisStar> {};

TEST_F(WhatColorIsThisStarTest, SimpleCase) { RunTest("627", "Red"); }

TEST_F(WhatColorIsThisStarTest, SimpleCase2) { RunTest("516", "Green"); }
