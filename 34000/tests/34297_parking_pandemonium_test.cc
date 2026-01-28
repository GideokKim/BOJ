#include "34000/src/34297_parking_pandemonium.h"

#include "test_headers/test_helper.h"

class ParkingPandemoniumTest : public IOTestFixture<ParkingPandemonium> {};

TEST_F(ParkingPandemoniumTest, SampleCase) { RunTest("10\n294\n3", "30"); }

TEST_F(ParkingPandemoniumTest, SampleCase2) { RunTest("2\n274\n21", "42"); }
