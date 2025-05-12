#include "2000/src/2491_sequence.h"

#include "test_headers/test_helper.h"

class SequenceTest : public IOTestFixture<Sequence> {};

TEST_F(SequenceTest, SampleCase) { RunTest("9\n1 2 2 4 4 5 7 7 2", "8"); }

TEST_F(SequenceTest, SampleCase2) { RunTest("9\n4 1 3 3 2 2 9 2 3", "4"); }

TEST_F(SequenceTest, SampleCase3) { RunTest("11\n1 5 3 6 4 7 1 3 2 9 5", "2"); }
