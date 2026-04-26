#include "31000/src/31636_three_consecutive.h"

#include "test_headers/test_helper.h"

class ThreeConsecutiveTest : public IOTestFixture<ThreeConsecutive> {};

TEST_F(ThreeConsecutiveTest, SampleCase) { RunTest("5\noxooo", "Yes"); }

TEST_F(ThreeConsecutiveTest, SampleCase2) { RunTest("5\nxooxo", "No"); }

TEST_F(ThreeConsecutiveTest, SampleCase3) { RunTest("1\no", "No"); }

TEST_F(ThreeConsecutiveTest, SampleCase4) { RunTest("10\noooooooooo", "Yes"); }

TEST_F(ThreeConsecutiveTest, SampleCase5) {
  RunTest("20\nxooxxoooxoxooxooxoox", "Yes");
}

TEST_F(ThreeConsecutiveTest, SampleCase6) {
  RunTest("20\nxooxxxooxoxooxooxoox", "No");
}
