#include "1000/src/1759_create_password.h"

#include <gtest/gtest.h>

TEST(CreatePasswordTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "4 6\na t c i s w\n";
  std::vector<std::string> expected_output = {
      "acis", "acit", "aciw", "acst", "acsw", "actw", "aist",
      "aisw", "aitw", "astw", "cist", "cisw", "citw", "istw"};

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  CreatePassword create_password;
  create_password.SetInputs();
  create_password.GeneratePasswords(0, 0);
  create_password.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::vector<std::string> result = create_password.GetResult();
  EXPECT_EQ(result.size(), expected_output.size());
  EXPECT_EQ(result, expected_output);
}
