#include "11000/src/11161_negative_people_in_da_house.h"

#include "test_headers/test_helper.h"

class NegativePeopleInDaHouseTest
    : public IOTestFixture<NegativePeopleInDaHouse> {};

TEST_F(NegativePeopleInDaHouseTest, SampleCase) {
  RunTest(
      "1\n"
      "3\n"
      "3 5\n"
      "3 4\n"
      "1 0",
      "3\n");
}
