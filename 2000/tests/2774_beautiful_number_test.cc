#include "2000/src/2774_beautiful_number.h"

#include "test_headers/test_helper.h"

class BeautifulNumberTest : public IOTestFixture<BeautifulNumber> {};

TEST_F(BeautifulNumberTest, SampleCase) { RunTest("2\n7\n122", "1\n2\n"); }
