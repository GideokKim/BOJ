#include "2000/src/2153_prime_words.h"

#include "test_headers/test_helper.h"

class PrimeWordsTest : public IOTestFixture<PrimeWords> {};

TEST_F(PrimeWordsTest, SimpleCase) { RunTest("UFRN", "It is a prime word."); }

TEST_F(PrimeWordsTest, SimpleCase2) {
  RunTest("contest", "It is not a prime word.");
}