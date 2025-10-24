#include "14000/src/14561_palindrome.h"

#include "test_headers/test_helper.h"

class PalindromeTest : public IOTestFixture<Palindrome> {};

TEST_F(PalindromeTest, SampleCase) {
  RunTest("5\n100 3\n30 2\n25 4\n58 8\n342633 16", "1\n0\n1\n0\n0\n");
}
