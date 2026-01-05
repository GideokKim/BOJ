#include "34000/src/34977_front_back_equal_sequence.h"

#include "test_headers/test_helper.h"

class FrontBackEqualSequenceTest
    : public IOTestFixture<FrontBackEqualSequence> {};

TEST_F(FrontBackEqualSequenceTest, SampleCase) { RunTest("4\n1 2 1 2", "yes"); }

TEST_F(FrontBackEqualSequenceTest, SampleCase2) {
  RunTest("5\n2 3 2 3 2", "yes");
}

TEST_F(FrontBackEqualSequenceTest, SampleCase3) { RunTest("2\n1 2", "no"); }
