#include "26000/src/26545_mathematics.h"

#include "test_headers/test_helper.h"

class MathematicsTest : public IOTestFixture<Mathematics> {};

TEST_F(MathematicsTest, SimpleCase) { RunTest("3\n1 2 3", "6"); }
