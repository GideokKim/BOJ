#include "30000/src/30236_increasing_sequence.h"

#include "test_headers/test_helper.h"

class IncreasingSequenceTest : public IOTestFixture<IncreasingSequence> {};

TEST_F(IncreasingSequenceTest, SimpleCase) {
  RunTest("3\n5\n1 3 2 6 7\n4\n2 3 4 5\n1\n1", "8\n4\n2\n");
}
