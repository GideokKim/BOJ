#include "27000/src/27331_two_digit_number.h"

#include "test_headers/test_helper.h"

class TwoDigitNumberTest : public IOTestFixture<TwoDigitNumber> {};

TEST_F(TwoDigitNumberTest, SampleCase) { RunTest("2\n2", "22"); }

TEST_F(TwoDigitNumberTest, SampleCase2) { RunTest("1\n9", "19"); }

TEST_F(TwoDigitNumberTest, SampleCase3) { RunTest("1\n0", "10"); }
