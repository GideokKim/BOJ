#include "1000/src/1264_number_of_vowel.h"

#include "test_headers/test_helper.h"

class NumberOfVowelTest : public IOTestFixture<NumberOfVowel> {};

TEST_F(NumberOfVowelTest, SampleCase) {
  RunTest(
      "How are you today?\nQuite well, thank you, how about yourself?\nI live "
      "at number twenty four.\n#",
      "7\n14\n9\n");
}
