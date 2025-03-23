#include "10000/src/10987_number_of_vowel.h"

#include "test_headers/test_helper.h"

class NumberOfVowelTest : public IOTestFixture<NumberOfVowel> {};

TEST_F(NumberOfVowelTest, SimpleCase) { RunTest("baekjoon", "4"); }
