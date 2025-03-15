#include "10000/src/10807_counting.h"

#include "test_headers/test_helper.h"

class CountingTest : public IOTestFixture<Counting> {};

TEST_F(CountingTest, SampleCase) {
  RunTest("11\n1 4 1 2 4 2 4 2 3 4 4\n2", "3");
}

TEST_F(CountingTest, SampleCase2) {
  RunTest("11\n1 4 1 2 4 2 4 2 3 4 4\n5", "0");
}
