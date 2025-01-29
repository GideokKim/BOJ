#ifndef TEST_HELPER_H_
#define TEST_HELPER_H_

#include <gtest/gtest.h>

#include <sstream>
#include <string>

template <typename T>
class IOTestFixture : public ::testing::Test {
 protected:
  void SetUp() override {
    orig_cin = std::cin.rdbuf();
    orig_cout = std::cout.rdbuf();
  }

  void TearDown() override {
    std::cin.rdbuf(orig_cin);
    std::cout.rdbuf(orig_cout);
  }

  void RunTest(const std::string& input, const std::string& expected_output) {
    std::istringstream iss(input);
    std::cin.rdbuf(iss.rdbuf());

    std::ostringstream oss;
    std::cout.rdbuf(oss.rdbuf());

    T solution;
    solution.SetInputs();
    solution.Calculate();
    solution.PrintResult();

    EXPECT_EQ(oss.str(), expected_output);
  }

  std::streambuf* orig_cin;
  std::streambuf* orig_cout;
};

#endif  // TEST_HELPER_H_