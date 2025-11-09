#include "30000/src/30456_floor_number.h"

#include "test_headers/test_helper.h"

class FloorNumberTest : public IOTestFixture<FloorNumber> {};

TEST_F(FloorNumberTest, SampleCase) { RunTest("8 4", "1118"); }

TEST_F(FloorNumberTest, SampleCase2) { RunTest("0 10", "1111111110"); }
