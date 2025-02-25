#include "27000/src/27324_same_numbers.h"

#include "test_headers/test_helper.h"

class SameNumbersTest : public IOTestFixture<SameNumbers> {};

TEST_F(SameNumbersTest, SampleCase) { RunTest("22", "1"); }

TEST_F(SameNumbersTest, SampleCase2) { RunTest("10", "0"); }
