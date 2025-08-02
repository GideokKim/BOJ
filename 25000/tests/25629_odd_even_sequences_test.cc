#include "25000/src/25629_odd_even_sequences.h"

#include "test_headers/test_helper.h"

class OddEvenSequencesTest : public IOTestFixture<OddEvenSequences> {};

TEST_F(OddEvenSequencesTest, SampleCase) { RunTest("3\n2 1 1", "1"); }

TEST_F(OddEvenSequencesTest, SampleCase2) { RunTest("3\n4 2 3", "0"); }

TEST_F(OddEvenSequencesTest, SampleCase3) { RunTest("5\n4 1 6 3 5", "1"); }
