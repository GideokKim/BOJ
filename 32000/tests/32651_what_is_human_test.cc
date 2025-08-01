#include "32000/src/32651_what_is_human.h"

#include "test_headers/test_helper.h"

class WhatIsHumanTest : public IOTestFixture<WhatIsHuman> {};

TEST_F(WhatIsHumanTest, SimpleCase) { RunTest("2024", "Yes"); }

TEST_F(WhatIsHumanTest, SimpleCase2) { RunTest("2023", "No"); }

TEST_F(WhatIsHumanTest, SimpleCase3) { RunTest("202400", "No"); }
