#include "34000/src/34236_welcome_to_skh.h"

#include "test_headers/test_helper.h"

class WelcomeToSKHTest : public IOTestFixture<WelcomeToSKH> {};

TEST_F(WelcomeToSKHTest, SampleCase) { RunTest("3\n2014 2017 2020", "2023"); }
