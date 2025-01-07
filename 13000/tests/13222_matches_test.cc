#include "13000/src/13222_matches.h"

#include <gtest/gtest.h>

TEST(MatchesTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "5 3 4\n3\n4\n5\n6\n7";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Matches matches;
  matches.SetInputs();
  std::vector<bool> result = matches.GetMatches();
  std::string result_string = "";
  for (bool match : result) {
    if (match) {
      result_string += "YES\n";
    } else {
      result_string += "NO\n";
    }
  }

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result_string, "YES\nYES\nYES\nNO\nNO\n");
}

TEST(MatchesTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2 12 17\n21\n20";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  Matches matches;
  matches.SetInputs();
  std::vector<bool> result = matches.GetMatches();
  std::string result_string = "";
  for (bool match : result) {
    if (match) {
      result_string += "YES\n";
    } else {
      result_string += "NO\n";
    }
  }

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result_string, "NO\nYES\n");
}
