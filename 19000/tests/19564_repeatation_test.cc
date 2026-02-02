#include "19000/src/19564_repeatation.h"

#include "test_headers/test_helper.h"

class RepeatationTest : public IOTestFixture<Repeatation> {};

TEST_F(RepeatationTest, SimpleCase) { RunTest("polymath", "6"); }
