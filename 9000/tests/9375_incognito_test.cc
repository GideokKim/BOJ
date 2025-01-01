#include "9000/src/9375_incognito.h"

#include <gtest/gtest.h>

TEST(IncognitoTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input =
      "2\n3\nhat headgear\n"
      "sunglasses eyewear\n"
      "turban headgear\n"
      "3\nmask face\n"
      "sunglasses face\n"
      "makeup face";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Incognito incognito;
  incognito.SetInputs();
  std::vector<int> result = incognito.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result[0], 5);
  EXPECT_EQ(result[1], 3);
}