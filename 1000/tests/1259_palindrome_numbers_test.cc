#include "1000/src/1259_palindrome_numbers.h"

#include "test_headers/test_helper.h"

class PalindromeNumbersTest : public IOTestFixture<PalindromeNumbers> {};

TEST_F(PalindromeNumbersTest, SampleCase) {
  RunTest("121\n1231\n12421\n0", "yes\nno\nyes\n");
}
