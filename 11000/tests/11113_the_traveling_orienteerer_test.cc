#include "11000/src/11113_the_traveling_orienteerer.h"

#include "test_headers/test_helper.h"

class TheTravelingOrienteererTest
    : public IOTestFixture<TheTravelingOrienteerer> {};

TEST_F(TheTravelingOrienteererTest, SampleCase) {
  RunTest(
      "5\n"
      "0.0 0.0\n"
      "1000.0 1000.0\n"
      "123.45 0.0\n"
      "3475.43 7765.4\n"
      "4325.9865 13.0\n"
      "2\n"
      "2\n"
      "0 1\n"
      "4\n"
      "3 1 4 0",
      "1414\n"
      "14999\n");
}
