#include "1000/src/1629_multiplication.h"

#include <gtest/gtest.h>

struct MultiplicationTestCase {
  unsigned long long A;
  unsigned long long B;
  unsigned long long C;
  unsigned long long expected;
  std::string test_name;
};

class MultiplicationTest
    : public testing::TestWithParam<MultiplicationTestCase> {};

TEST_P(MultiplicationTest, CalculateResults) {
  const auto& param = GetParam();
  auto result = Multiplication(param.A, param.B, param.C).Calculate();

  EXPECT_EQ(result, param.expected) << "Failed on case: " << param.test_name;
}

INSTANTIATE_TEST_SUITE_P(
    MultiplicationTests, MultiplicationTest,
    testing::Values(
        MultiplicationTestCase{
            .A = 10, .B = 11, .C = 12, .expected = 4, .test_name = "BasicCase"},
        MultiplicationTestCase{
            .A = 10, .B = 10, .C = 100, .expected = 0, .test_name = "ZeroCase"},
        MultiplicationTestCase{.A = 3,
                               .B = 2147483647,
                               .C = 2147483647,
                               .expected = 3,
                               .test_name = "lazyCase"},
        MultiplicationTestCase{.A = 1,
                               .B = 2147483647,
                               .C = 100,
                               .expected = 1,
                               .test_name = "MaxIterationCase"}),
    [](const testing::TestParamInfo<MultiplicationTest::ParamType>& info) {
      return info.param.test_name;
    });
