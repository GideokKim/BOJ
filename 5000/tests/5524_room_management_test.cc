#include "5000/src/5524_room_management.h"

#include "test_headers/test_helper.h"

class RoomManagementTest : public IOTestFixture<RoomManagement> {};

TEST_F(RoomManagementTest, SampleCase) {
  RunTest("3\nWatanabE\nITO\nYamaMoto\n", "watanabe\nito\nyamamoto\n");
}

TEST_F(RoomManagementTest, SampleCase2) {
  RunTest("4\nSUZUKI\ntanaka\ntAkAhAshi\nSuZuKi\n",
          "suzuki\ntanaka\ntakahashi\nsuzuki\n");
}
