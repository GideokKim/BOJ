#include <gtest/gtest.h>

#include "10000/src/10811_reverse_buckets.h"

TEST(ReverseBucketsTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5 4\n1 2\n3 4\n1 4\n2 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  ReverseBuckets reverse_buckets;
  reverse_buckets.SetInputs();
  reverse_buckets.CalculateBucketNumbers();
  reverse_buckets.PrintBucketNumbers();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3 4 1 2 5 ";

  EXPECT_EQ(oss.str(), expected_output);
}
