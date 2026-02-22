#include "7000/src/7130_mika_and_honey.h"

#include "test_headers/test_helper.h"

class MikaAndHoneyTest : public IOTestFixture<MikaAndHoney> {};

TEST_F(MikaAndHoneyTest, SimpleCase) { RunTest("3 5\n3\n4 2\n3 2\n2 1", "28"); }
