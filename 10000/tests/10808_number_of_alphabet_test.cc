#include "10000/src/10808_number_of_alphabet.h"

#include "test_headers/test_helper.h"

class NumberOfAlphabetTest : public IOTestFixture<NumberOfAlphabet> {};

TEST_F(NumberOfAlphabetTest, SampleCase) {
  RunTest("baekjoon", "1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0 ");
}
