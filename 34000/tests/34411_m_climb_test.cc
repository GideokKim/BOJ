#include "34000/src/34411_m_climb.h"

#include "test_headers/test_helper.h"

class MClimbTest : public IOTestFixture<MClimb> {};

TEST_F(MClimbTest, SampleCase) { RunTest("50\n10\n2021", "500"); }

TEST_F(MClimbTest, SampleCase2) { RunTest("26\n7\n2022", "182"); }