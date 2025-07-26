#include "33000/src/33557_who_do_this_multiplication.h"

#include "test_headers/test_helper.h"

class WhoDoThisMultiplicationTest
    : public IOTestFixture<WhoDoThisMultiplication> {};

TEST_F(WhoDoThisMultiplicationTest, SampleCase) {
  RunTest(
      "5\n"
      "1 16383\n"
      "7 7\n"
      "187 88\n"
      "924 1376\n"
      "526983 98387",
      "1\n1\n1\n1\n1\n");
}
