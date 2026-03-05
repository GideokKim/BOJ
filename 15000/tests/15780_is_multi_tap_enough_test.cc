#include "15000/src/15780_is_multi_tap_enough.h"

#include "test_headers/test_helper.h"

class IsMultiTapEnoughTest : public IOTestFixture<IsMultiTapEnough> {};

TEST_F(IsMultiTapEnoughTest, SampleCase) { RunTest("3 5\n3 4 5 6 7", "YES"); }

TEST_F(IsMultiTapEnoughTest, SampleCase2) { RunTest("6 2\n3 4", "NO"); }
