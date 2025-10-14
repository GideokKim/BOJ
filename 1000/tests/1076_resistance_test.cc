#include "1000/src/1076_resistance.h"

#include "test_headers/test_helper.h"

class ResistanceTest : public IOTestFixture<Resistance> {};

TEST_F(ResistanceTest, SampleCase) { RunTest("yellow\nviolet\nred", "4700"); }

TEST_F(ResistanceTest, SampleCase2) {
  RunTest("orange\nred\nblue", "32000000");
}

TEST_F(ResistanceTest, SampleCase3) {
  RunTest("white\nwhite\nwhite", "99000000000");
}

TEST_F(ResistanceTest, SampleCase4) { RunTest("white\nwhite\nblack", "99"); }