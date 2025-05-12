#include "2000/src/2583_get_area.h"

#include "test_headers/test_helper.h"

class GetAreaTest : public IOTestFixture<GetArea> {};

TEST_F(GetAreaTest, SimpleCase) {
  RunTest("5 7 3\n0 2 4 4\n1 1 2 5\n4 0 6 2", "3\n1 7 13 ");
}
