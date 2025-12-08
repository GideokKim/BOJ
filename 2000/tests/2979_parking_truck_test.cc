#include "2000/src/2979_parking_truck.h"

#include "test_headers/test_helper.h"

class ParkingTruckTest : public IOTestFixture<ParkingTruck> {};

TEST_F(ParkingTruckTest, SampleCase) { RunTest("5 3 1\n1 6\n3 5\n2 8", "33"); }

TEST_F(ParkingTruckTest, SampleCase2) {
  RunTest("10 8 6\n15 30\n25 50\n70 80", "480");
}
