#include "20000/src/20977_joi_sort.h"

#include "test_headers/test_helper.h"

class JoiSortTest : public IOTestFixture<JoiSort> {};

TEST_F(JoiSortTest, SimpleCase) { RunTest("6\nJIOIJO", "JJOOII"); }

TEST_F(JoiSortTest, SimpleCase2) { RunTest("4\nOOOI", "OOOI"); }

TEST_F(JoiSortTest, SimpleCase3) { RunTest("10\nOIJJJIOIOI", "JJJOOOIIII"); }