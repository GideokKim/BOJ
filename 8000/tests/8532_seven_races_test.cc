#include "8000/src/8532_seven_races.h"

#include "test_headers/test_helper.h"

class SevenRacesTest : public IOTestFixture<SevenRaces> {};

TEST_F(SevenRacesTest, SimpleCase) {
  RunTest(
      "3\n19 90 11 29 264 20 131\n12 95 21 37 224 35 221\n17 168 15 23 275 22 "
      "241",
      "2901\n3419\n3772\n");
}
