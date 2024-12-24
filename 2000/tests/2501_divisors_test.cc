#include "2000/src/2501_divisors.h"

#include <gtest/gtest.h>

struct DivisorsTestCase {
  int N;
  int K;
  int expected;
  std::string test_name;
};

class DivisorsTest : public testing::TestWithParam<DivisorsTestCase> {};

TEST_P(DivisorsTest, CalculateResults) {
  const auto& param = GetParam();
  auto result = Divisors(param.N, param.K).Calculate();

  EXPECT_EQ(result, param.expected) << "Failed on case: " << param.test_name;
}

INSTANTIATE_TEST_SUITE_P(
    DivisorsTests, DivisorsTest,
    testing::Values(
        DivisorsTestCase{
            .N = 6, .K = 3, .expected = 3, .test_name = "BasicCase"},
        DivisorsTestCase{
            .N = 25, .K = 4, .expected = 0, .test_name = "ZeroCase"},
        DivisorsTestCase{
            .N = 2735, .K = 1, .expected = 1, .test_name = "PrimeNumber"}),
    [](const testing::TestParamInfo<DivisorsTest::ParamType>& info) {
      return info.param.test_name;
    });
