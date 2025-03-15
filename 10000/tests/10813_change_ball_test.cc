#include "10000/src/10813_change_ball.h"

#include "test_headers/test_helper.h"

class ChangeBallTest : public IOTestFixture<ChangeBall> {};

TEST_F(ChangeBallTest, SampleCase) {
  RunTest("5 4\n1 2\n3 4\n1 4\n2 2", "3 1 4 2 5 ");
}
