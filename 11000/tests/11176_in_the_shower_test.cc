#include "11000/src/11176_in_the_shower.h"

#include "test_headers/test_helper.h"

class InTheShowerTest : public IOTestFixture<InTheShower> {};

TEST_F(InTheShowerTest, SampleCase) {
  RunTest(
      "1\n"
      "5 3\n"
      "1\n"
      "5\n"
      "6",
      "1\n");
}
