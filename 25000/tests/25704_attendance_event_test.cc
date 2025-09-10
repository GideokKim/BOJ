#include "25000/src/25704_attendance_event.h"

#include "test_headers/test_helper.h"

class AttendanceEventTest : public IOTestFixture<AttendanceEvent> {};

TEST_F(AttendanceEventTest, SampleCase) { RunTest("12\n50000", "45000"); }

TEST_F(AttendanceEventTest, SampleCase2) { RunTest("23\n3000", "1000"); }
