#include "2000/src/2897_monster_truck.h"

#include "test_headers/test_helper.h"

class MonsterTruckTest : public IOTestFixture<MonsterTruck> {};

TEST_F(MonsterTruckTest, SampleCase) {
  RunTest("4 4\n#..#\n..X.\n..X.\n#XX#", "1\n1\n2\n1\n0\n");
}

TEST_F(MonsterTruckTest, SampleCase2) {
  RunTest("4 4\n....\n....\n....\n....", "9\n0\n0\n0\n0\n");
}

TEST_F(MonsterTruckTest, SampleCase3) {
  RunTest("4 5\n..XX.\n.#XX.\n..#..\n.....", "2\n1\n1\n0\n1\n");
}
