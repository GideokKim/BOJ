#include "31000/src/31615_digit.h"

#include "test_headers/test_helper.h"

class DigitTest : public IOTestFixture<Digit> {};

TEST_F(DigitTest, SampleCase) { RunTest("3\n9", "2"); }

TEST_F(DigitTest, SampleCase2) { RunTest("499\n499", "3"); }

TEST_F(DigitTest, SampleCase3) { RunTest("3\n2", "1"); }

TEST_F(DigitTest, SampleCase4) { RunTest("1\n99", "3"); }
