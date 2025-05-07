#include "4000/src/4470_line_numbers.h"

#include "test_headers/test_helper.h"

class LineNumbersTest : public IOTestFixture<LineNumbers> {};

TEST_F(LineNumbersTest, SampleCase) {
  RunTest(
      "5\nLionel Cosgrove\nAlice\nColumbus and Tallahassee\nShaun and Ed\nFido",
      "1. Lionel Cosgrove\n2. Alice\n3. Columbus and Tallahassee\n4. Shaun and "
      "Ed\n5. Fido\n");
}
