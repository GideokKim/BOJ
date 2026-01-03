#include "25000/src/25558_navigation.h"

#include "test_headers/test_helper.h"

class NavigationTest : public IOTestFixture<Navigation> {};

TEST_F(NavigationTest, SampleCase) {
  RunTest("3\n0 0 10 10\n2\n11 1\n9 9\n2\n1 12\n9 9\n2\n5 5\n9 9", "3");
}
