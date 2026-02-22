#include "11000/src/11034_three_kangaroo2.h"

#include "test_headers/test_helper.h"

class ThreeKangaroo2Test : public IOTestFixture<ThreeKangaroo2> {};

TEST_F(ThreeKangaroo2Test, SampleCase) { RunTest("2 3 5\n3 5 9", "1\n3\n"); }
