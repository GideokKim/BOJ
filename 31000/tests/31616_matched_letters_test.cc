#include "31000/src/31616_matched_letters.h"

#include "test_headers/test_helper.h"

class MatchedLettersTest : public IOTestFixture<MatchedLetters> {};

TEST_F(MatchedLettersTest, SampleCase) { RunTest("4\nbbbb", "Yes"); }

TEST_F(MatchedLettersTest, SampleCase2) { RunTest("7\npppdppp", "No"); }

TEST_F(MatchedLettersTest, SampleCase3) { RunTest("2\nxx", "Yes"); }

TEST_F(MatchedLettersTest, SampleCase4) { RunTest("9\njoijoijoi", "No"); }
