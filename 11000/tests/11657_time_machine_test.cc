#include "11000/src/11657_time_machine.h"

#include "test_headers/test_helper.h"

class TimeMachineTest : public IOTestFixture<TimeMachine> {};

TEST_F(TimeMachineTest, SampleCase) {
  RunTest("3 4\n1 2 4\n1 3 3\n2 3 -1\n3 1 -2\n", "4\n3\n");
}

TEST_F(TimeMachineTest, SampleCase2) {
  RunTest("3 4\n1 2 4\n1 3 3\n2 3 -4\n3 1 -2\n", "-1\n");
}

TEST_F(TimeMachineTest, SampleCase3) {
  RunTest("3 2\n1 2 4\n1 2 3\n", "3\n-1\n");
}
