#include "2000/src/2675_string_repeatation.h"

#include "test_headers/test_helper.h"

class StringRepeatationTest : public IOTestFixture<StringRepeatation> {};

TEST_F(StringRepeatationTest, SampleCase) {
  RunTest("2\n3 abc\n5 /HTP", "aaabbbccc\n/////HHHHHTTTTTPPPPP\n");
}

TEST_F(StringRepeatationTest, SampleCase2) {
  RunTest("1\n3 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./:",
          "000111222333444555666777888999AAABBBCCCDDDEEEFFFGGGHHHIIIJJJKKKLLLMM"
          "MNNNOOOPPPQQQRRRSSSTTTUUUVVVWWWXXXYYYZZZ$$$%%%***+++---...///:::\n");
}