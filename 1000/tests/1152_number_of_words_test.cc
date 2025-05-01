#include "1000/src/1152_number_of_words.h"

#include "test_headers/test_helper.h"

class NumberOfWordsTest : public IOTestFixture<NumberOfWords> {};

TEST_F(NumberOfWordsTest, SampleCase) {
  RunTest("The Curious Case of Benjamin Button\n", "6");
}

TEST_F(NumberOfWordsTest, SampleCase2) {
  RunTest(" The first character is a blank\n", "6");
}

TEST_F(NumberOfWordsTest, SampleCase3) {
  RunTest("The last character is a blank \n", "6");
}

TEST_F(NumberOfWordsTest, SampleCase4) {
  RunTest(" The last character is a blank \n", "6");
}

TEST_F(NumberOfWordsTest, SampleCase5) { RunTest(" \n", "0"); }

TEST_F(NumberOfWordsTest, SampleCase6) { RunTest("\n", "0"); }