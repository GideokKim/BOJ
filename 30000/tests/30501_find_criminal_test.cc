#include "30000/src/30501_find_criminal.h"

#include "test_headers/test_helper.h"

class FindCriminalTest : public IOTestFixture<FindCriminal> {};

TEST_F(FindCriminalTest, SampleCase) {
  RunTest("3\nZHOUYU\nSUNQUAN\nZOZO", "SUNQUAN");
}
