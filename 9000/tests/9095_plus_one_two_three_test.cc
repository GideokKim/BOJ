#include "9000/src/9095_plus_one_two_three.h"

#include "test_headers/test_helper.h"

class PlusOneTwoThreeTest : public IOTestFixture<PlusOneTwoThree> {};

TEST_F(PlusOneTwoThreeTest, SampleCase) {
  RunTest("3\n4\n7\n10", "7\n44\n274\n");
}