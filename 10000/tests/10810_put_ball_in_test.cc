#include "10000/src/10810_put_ball_in.h"

#include "test_headers/test_helper.h"

class PutBallInTest : public IOTestFixture<PutBallIn> {};

TEST_F(PutBallInTest, SampleCase) {
  RunTest("5 4\n1 2 3\n3 4 4\n1 4 1\n2 2 2", "1 2 1 1 0 ");
}
