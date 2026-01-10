#include "2000/src/2858_dormitory_floor.h"

#include "test_headers/test_helper.h"

class DormitoryFloorTest : public IOTestFixture<DormitoryFloor> {};

TEST_F(DormitoryFloorTest, SampleCase) { RunTest("8 1", "3 3"); }

TEST_F(DormitoryFloorTest, SampleCase2) { RunTest("10 2", "4 3"); }

TEST_F(DormitoryFloorTest, SampleCase3) { RunTest("24 24", "8 6"); }
