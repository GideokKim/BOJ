#include "30000/src/30033_rust_study.h"

#include <gtest/gtest.h>

TEST(RustStudyTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5\n5 6 7 8 9\n5 5 5 10 10";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  RustStudy rust_study;
  rust_study.Calculate();
  size_t result = rust_study.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 3);
}
