#include "31000/src/31408_schedule.h"

#include "test_headers/test_helper.h"

class ScheduleTest : public IOTestFixture<Schedule> {};

TEST_F(ScheduleTest, SampleCase) { RunTest("7\n2 2 2 2 3 5 3", "YES"); }

TEST_F(ScheduleTest, SampleCase2) { RunTest("6\n1 2 3 4 5 6", "YES"); }

TEST_F(ScheduleTest, SampleCase3) { RunTest("4\n4 4 4 3", "NO"); }
