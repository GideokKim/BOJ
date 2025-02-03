#include "32000/src/32979_apartment.h"

#include "test_headers/test_helper.h"

class ApartmentTest : public IOTestFixture<Apartment> {};

TEST_F(ApartmentTest, SimpleCase) {
  RunTest(
      "4\n"
      "2\n"
      "2 4 4 3 3 1 2 1\n"
      "3 12",
      "4 1 ");
}

TEST_F(ApartmentTest, SimpleCase2) {
  RunTest(
      "2\n"
      "8\n"
      "1 2 1 2\n"
      "1 2 3 4 5 6 7 8",
      "1 2 2 1 1 2 2 1 ");
}
