#include "29000/src/29699_welcom_to_smupc.h"

#include "test_headers/test_helper.h"

class WelcomeToSmupcTest : public IOTestFixture<WelcomeToSmupc> {};

TEST_F(WelcomeToSmupcTest, SimpleCase) { RunTest("2", "e"); }

TEST_F(WelcomeToSmupcTest, SimpleCase2) { RunTest("15", "W"); }
