#include "1000/src/1747_prime_and_palindrome.h"

#include "test_headers/test_helper.h"

class PrimeAndPalindromeTest : public IOTestFixture<PrimeAndPalindrome> {};

TEST_F(PrimeAndPalindromeTest, SampleCase) { RunTest("31", "101"); }

TEST_F(PrimeAndPalindromeTest, SampleCase2) { RunTest("1", "2"); }
