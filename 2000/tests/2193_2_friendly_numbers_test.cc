#include "2000/src/2193_2_friendly_numbers.h"

#include "test_headers/test_helper.h"

class FriendlyNumbersTest : public IOTestFixture<FriendlyNumbers> {};

TEST_F(FriendlyNumbersTest, SampleCase) { RunTest("3", "2"); }
