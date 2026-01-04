#include "32000/src/32932_drone_control.h"

#include "test_headers/test_helper.h"

class DroneControlTest : public IOTestFixture<DroneControl> {};

TEST_F(DroneControlTest, SimpleCase) {
  RunTest("4 13\n-2 0\n1 1\n-1 -2\n2 -1\nLLLDDDRRRUUUR", "2 0");
}
