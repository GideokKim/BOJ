#include "14000/src/14913_find_element_number.h"

#include "test_headers/test_helper.h"

class FindElementNumberTest : public IOTestFixture<FindElementNumber> {};

TEST_F(FindElementNumberTest, SampleCase) { RunTest("1 2 9", "5"); }

TEST_F(FindElementNumberTest, SampleCase2) { RunTest("1 4 13", "4"); }

TEST_F(FindElementNumberTest, SampleCase3) { RunTest("2 2 9", "X"); }