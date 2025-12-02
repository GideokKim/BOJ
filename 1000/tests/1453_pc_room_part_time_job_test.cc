#include "1000/src/1453_pc_room_part_time_job.h"

#include "test_headers/test_helper.h"

class PCRoomPartTimeJobTest : public IOTestFixture<PCRoomPartTimeJob> {};

TEST_F(PCRoomPartTimeJobTest, SampleCase) { RunTest("3\n1 2 3", "0"); }
