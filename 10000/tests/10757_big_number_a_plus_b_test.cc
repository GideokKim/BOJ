#include "10000/src/10757_big_number_a_plus_b.h"
#include "test_headers/test_helper.h"

class BigNumberAPlusBTest : public IOTestFixture<BigNumberAPlusB> {};

TEST_F(BigNumberAPlusBTest, CorrectSum) {
  RunTest("9223372036854775807 9223372036854775808\n", "18446744073709551615");
}
