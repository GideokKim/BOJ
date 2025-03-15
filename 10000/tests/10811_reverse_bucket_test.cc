#include "10000/src/10811_reverse_buckets.h"
#include "test_headers/test_helper.h"

class ReverseBucketsTest : public IOTestFixture<ReverseBuckets> {};

TEST_F(ReverseBucketsTest, SampleCase) {
  RunTest("5 4\n1 2\n3 4\n1 4\n2 2", "3 4 1 2 5 ");
}
