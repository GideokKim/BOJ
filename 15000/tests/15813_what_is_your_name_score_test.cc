#include "15000/src/15813_what_is_your_name_score.h"

#include "test_headers/test_helper.h"

class WhatIsYourNameScoreTest : public IOTestFixture<WhatIsYourNameScore> {};

TEST_F(WhatIsYourNameScoreTest, SampleCase) { RunTest("7\nSUNGPIL", "98"); }

TEST_F(WhatIsYourNameScoreTest, SampleCase2) { RunTest("6\nSOYOON", "103"); }