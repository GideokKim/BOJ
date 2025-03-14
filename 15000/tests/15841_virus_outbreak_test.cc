#include "15000/src/15841_virus_outbreak.h"

#include "test_headers/test_helper.h"

class VirusOutbreakTest : public IOTestFixture<VirusOutbreak> {};

TEST_F(VirusOutbreakTest, SampleCase) {
  RunTest("1\n4\n6\n11\n-1",
          "Hour 1: 1 cow(s) affected\nHour 4: 3 cow(s) affected\nHour 6: 8 "
          "cow(s) affected\nHour 11: 89 cow(s) affected\n");
}

TEST_F(VirusOutbreakTest, SampleCase2) {
  RunTest("10\n50\n100\n490\n-1",
          "Hour 1: 1 cow(s) affected\nHour 4: 3 cow(s) affected\nHour 6: 8 "
          "cow(s) affected\nHour 11: 89 cow(s) affected\n");
}