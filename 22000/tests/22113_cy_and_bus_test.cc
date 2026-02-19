#include "22000/src/22113_cy_and_bus.h"

#include "test_headers/test_helper.h"

class CyAndBusTest : public IOTestFixture<CyAndBus> {};

TEST_F(CyAndBusTest, SampleCase) {
  RunTest("4 3\n3 1 2\n0 2 3 4\n5 0 7 8\n1 2 0 4\n5 6 7 0", "3");
}
