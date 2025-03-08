#include "13000/src/13698_hawk_eyes.h"

#include "test_headers/test_helper.h"

class HawkEyesTest : public IOTestFixture<HawkEyes> {};

TEST_F(HawkEyesTest, SampleCase) { RunTest("AB", "2\n4"); }
