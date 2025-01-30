#include "10000/src/10988_check_palindrome.h"

#include "test_headers/test_helper.h"

class CheckPalindromeTest : public IOTestFixture<CheckPalindrome> {};

TEST_F(CheckPalindromeTest, SimpleCase) { RunTest("level", "1"); }

TEST_F(CheckPalindromeTest, EdgeCase) { RunTest("baekjoon", "0"); }
