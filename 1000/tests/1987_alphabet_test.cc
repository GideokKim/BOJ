#include "1000/src/1987_alphabet.h"

#include "test_headers/test_helper.h"

class AlphabetTest : public IOTestFixture<Alphabet> {};

TEST_F(AlphabetTest, SampleCase) { RunTest("2 4\nCAAB\nADCB", "3"); }

TEST_F(AlphabetTest, SampleCase2) {
  RunTest("3 6\nHFDFFB\nAJHGDH\nDGAGEH", "6");
}

TEST_F(AlphabetTest, SampleCase3) {
  RunTest("5 5\nIEFCJ\nFHFKC\nFFALF\nHFGCF\nHMCHH", "10");
}

TEST_F(AlphabetTest, SampleCase4) { RunTest("2 2\nZC\nAZ", "2"); }
