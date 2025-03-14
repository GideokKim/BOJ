#include "1000/src/1440_timemachine.h"

#include "test_headers/test_helper.h"

class TimeMachineTest : public IOTestFixture<TimeMachine> {};

TEST_F(TimeMachineTest, SampleCase) { RunTest("00:00:00", "0"); }

TEST_F(TimeMachineTest, SampleCase2) { RunTest("01:00:00", "2"); }

TEST_F(TimeMachineTest, SampleCase3) { RunTest("01:12:23", "4"); }

TEST_F(TimeMachineTest, SampleCase4) { RunTest("21:23:01", "2"); }

TEST_F(TimeMachineTest, SampleCase5) { RunTest("01:02:03", "6"); }

TEST_F(TimeMachineTest, SampleCase6) { RunTest("59:59:01", "2"); }

TEST_F(TimeMachineTest, SampleCase7) { RunTest("01:01:59", "4"); }