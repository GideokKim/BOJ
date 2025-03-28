#include "18000/src/18408_three_integers.h"

#include "test_headers/test_helper.h"

class ThreeIntegersTest : public IOTestFixture<ThreeIntegers> {};

TEST_F(ThreeIntegersTest, SimpleCase) { RunTest("1 2 1", "1"); }

TEST_F(ThreeIntegersTest, SimpleCase2) { RunTest("2 2 2", "2"); }
