#include "15000/src/15784_jealousy_jinseo.h"

#include "test_headers/test_helper.h"

class JealousyJinseoTest : public IOTestFixture<JealousyJinseo> {};

TEST_F(JealousyJinseoTest, SampleCase) {
  RunTest(
      "5 3 2\n10 2 3 24 4\n21 4 5 12 1\n24 52 4 2 2\n2 4 3 2 32\n1 4 32 2 4",
      "HAPPY");
}
