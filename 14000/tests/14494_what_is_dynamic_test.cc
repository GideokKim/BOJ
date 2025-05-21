#include "14000/src/14494_what_is_dynamic.h"

#include "test_headers/test_helper.h"

class WhatIsDynamicTest : public IOTestFixture<WhatIsDynamic> {};

TEST_F(WhatIsDynamicTest, SampleCase) { RunTest("3 2", "5"); }

TEST_F(WhatIsDynamicTest, SampleCase2) { RunTest("4 5", "129"); }

TEST_F(WhatIsDynamicTest, SampleCase3) { RunTest("1000 1000", "910657857"); }
