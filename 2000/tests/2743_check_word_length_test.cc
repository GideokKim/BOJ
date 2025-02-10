#include "2000/src/2743_check_word_length.h"

#include "test_headers/test_helper.h"

class CheckWordLengthTest : public IOTestFixture<CheckWordLength> {};

TEST_F(CheckWordLengthTest, SampleCase) { RunTest("hello", "5"); }

TEST_F(CheckWordLengthTest, SampleCase2) { RunTest("pulljima", "8"); }
