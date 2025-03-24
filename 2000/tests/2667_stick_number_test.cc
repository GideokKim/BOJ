#include "2000/src/2667_stick_number.h"

#include "test_headers/test_helper.h"

class StickNumberTest : public IOTestFixture<StickNumber> {};

TEST_F(StickNumberTest, SampleCase) {
  RunTest("7\n0110100\n0110101\n1110101\n0000111\n0100000\n0111110\n0111000",
          "3\n7\n8\n9\n");
}
