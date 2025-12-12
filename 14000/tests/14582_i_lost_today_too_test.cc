#include "14000/src/14582_i_lost_today_too.h"

#include "test_headers/test_helper.h"

class ILostTodayTooTest : public IOTestFixture<ILostTodayToo> {};

TEST_F(ILostTodayTooTest, SampleCase) {
  RunTest("1 0 0 0 0 0 2 2 1\n0 0 3 0 0 0 0 1 4", "Yes");
}

TEST_F(ILostTodayTooTest, SampleCase2) {
  RunTest("0 0 0 0 0 0 0 1 0\n1 0 0 0 0 0 0 4 0", "No");
}
