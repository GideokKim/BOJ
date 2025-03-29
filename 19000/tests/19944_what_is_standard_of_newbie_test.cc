#include "19000/src/19944_what_is_standard_of_newbie.h"
#include "test_headers/test_helper.h"

class WhatIsStandardOfNewbieTest
    : public IOTestFixture<WhatIsStandardOfNewbie> {};

TEST_F(WhatIsStandardOfNewbieTest, SimpleCase) { RunTest("3 1", "NEWBIE!"); }

TEST_F(WhatIsStandardOfNewbieTest, SimpleCase2) { RunTest("3 5", "TLE!"); }

TEST_F(WhatIsStandardOfNewbieTest, SimpleCase3) { RunTest("3 3", "OLDBIE!"); }
