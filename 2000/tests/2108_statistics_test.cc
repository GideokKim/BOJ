#include "2000/src/2108_statistics.h"

#include <gtest/gtest.h>

struct StatisticsTestCase {
  std::vector<int> input;
  Statistics::Result expected;
  std::string test_name;
};

class StatisticsTest : public testing::TestWithParam<StatisticsTestCase> {};

TEST_P(StatisticsTest, CalculateResults) {
  const auto& param = GetParam();
  auto result = Statistics::Calculate(param.input);

  EXPECT_EQ(result.average, param.expected.average)
      << "Failed on case: " << param.test_name;
  EXPECT_EQ(result.median, param.expected.median)
      << "Failed on case: " << param.test_name;
  EXPECT_EQ(result.mode, param.expected.mode)
      << "Failed on case: " << param.test_name;
  EXPECT_EQ(result.range, param.expected.range)
      << "Failed on case: " << param.test_name;
}

INSTANTIATE_TEST_SUITE_P(
    StatisticsTests, StatisticsTest,
    testing::Values(StatisticsTestCase{.input = {1, 3, 8, -2, 2},
                                       .expected = {2, 2, 1, 10},
                                       .test_name = "BasicCase"},
                    StatisticsTestCase{.input = {4000},
                                       .expected = {4000, 4000, 4000, 0},
                                       .test_name = "EdgeCase"},
                    StatisticsTestCase{.input = {-1, -2, -3, -1, -2},
                                       .expected = {-2, -2, -1, 2},
                                       .test_name = "AllNegative"},
                    StatisticsTestCase{.input = {0, 0, -1},
                                       .expected = {0, 0, 0, 1},
                                       .test_name = "DuplicateNumber"}),
    [](const testing::TestParamInfo<StatisticsTest::ParamType>& info) {
      return info.param.test_name;
    });