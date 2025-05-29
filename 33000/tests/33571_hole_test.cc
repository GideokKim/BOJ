#include "33000/src/33571_hole.h"

#include "test_headers/test_helper.h"

class HoleTest : public IOTestFixture<Hole> {};

TEST_F(HoleTest, SampleCase) {
  RunTest("dimigo is the best high school @", "10");
}

TEST_F(HoleTest, SampleCase2) { RunTest("BBBBBB", "12"); }