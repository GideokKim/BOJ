#include "25000/src/25600_triathlon.h"

#include "test_headers/test_helper.h"

class TriathlonTest : public IOTestFixture<Triathlon> {};

TEST_F(TriathlonTest, SampleCase) {
  RunTest(
      "5\n"
      "1 0 1\n"
      "5 2 3\n"
      "5 5 4\n"
      "0 1 4\n"
      "3 7 2",
      "50");
}
