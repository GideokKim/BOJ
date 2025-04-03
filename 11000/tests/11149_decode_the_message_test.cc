#include "11000/src/11149_decode_the_message.h"

#include "test_headers/test_helper.h"

class DecodeTheMessageTest : public IOTestFixture<DecodeTheMessage> {};

TEST_F(DecodeTheMessageTest, SampleCase) {
  RunTest(
      "2\n"
      "a b c d e f\n"
      "it is late o green wrong whole",
      "abcdef\n"
      "a horse\n");
}
