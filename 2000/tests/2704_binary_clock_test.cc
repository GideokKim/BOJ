#include "2000/src/2704_binary_clock.h"

#include "test_headers/test_helper.h"

class BinaryClockTest : public IOTestFixture<BinaryClock> {};

TEST_F(BinaryClockTest, SimpleCase) {
  RunTest("2\n10:37:49\n00:00:01",
          "011001100010100011 001010100101110001\n"
          "000000000000000001 000000000000000001\n");
}
