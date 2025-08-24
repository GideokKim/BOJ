#include "32000/src/32297_making_string.h"

#include "test_headers/test_helper.h"

class MakingStringTest : public IOTestFixture<MakingString> {};

TEST_F(MakingStringTest, SimpleCase) { RunTest("9\nalgorithm", "YES"); }

TEST_F(MakingStringTest, SimpleCase2) { RunTest("8\nggoorrii", "NO"); }