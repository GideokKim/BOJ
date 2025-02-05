#include "27000/src/27866_words_and_strings.h"

#include "test_headers/test_helper.h"

class WordsAndStringsTest : public IOTestFixture<WordsAndStrings> {};

TEST_F(WordsAndStringsTest, SampleCase) { RunTest("Sprout\n3", "r"); }

TEST_F(WordsAndStringsTest, SampleCase2) { RunTest("shiftpsh\n6", "p"); }

TEST_F(WordsAndStringsTest, SampleCase3) { RunTest("Baekjoon\n4", "k"); }
