#include "32000/src/32929_uos_string.h"

#include "test_headers/test_helper.h"

class UOSStringTest : public IOTestFixture<UOSString> {};

TEST_F(UOSStringTest, SimpleCase) { RunTest("5", "O"); }

TEST_F(UOSStringTest, SimpleCase2) { RunTest("1000000000", "U"); }
