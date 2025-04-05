#include "13000/src/13751_histogram.h"

#include "test_headers/test_helper.h"

class HistogramTest : public IOTestFixture<Histogram> {};

TEST_F(HistogramTest, SampleCase) {
  RunTest("5\n1\n3\n4\n6\n2", "=\n===\n====\n======\n==\n");
}

TEST_F(HistogramTest, SampleCase2) {
  RunTest("4\n10\n30\n25\n16",
          "==========\n==============================\n========================"
          "=\n================\n");
}
