#include "34000/src/34400_circadian_rhythm.h"

#include "test_headers/test_helper.h"

class CircadianRhythmTest : public IOTestFixture<CircadianRhythm> {};

TEST_F(CircadianRhythmTest, SampleCase) {
  RunTest("6\n0\n17\n18\n24\n25\n600",
          "ONLINE\nOFFLINE\nOFFLINE\nOFFLINE\nONLINE\nONLINE\n");
}