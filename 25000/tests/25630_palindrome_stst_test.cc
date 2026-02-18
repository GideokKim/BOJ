#include "25000/src/25630_palindrome_stst.h"

#include "test_headers/test_helper.h"

class PalindromeStstTest : public IOTestFixture<PalindromeStst> {};

TEST_F(PalindromeStstTest, SampleCase) { RunTest("7\nststtss", "2"); }

TEST_F(PalindromeStstTest, SampleCase2) { RunTest("8\nttsststt", "1"); }

TEST_F(PalindromeStstTest, SampleCase3) { RunTest("6\nssttss", "0"); }
