#include "17000/src/17224_why_did_apc_become_subtask_competition.h"

#include <gtest/gtest.h>

TEST(WhyDidAPCBecomeSubtaskCompetitionTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "4 8 4\n1 8\n4 5\n6 20\n9 12";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  WhyDidAPCBecomeSubtaskCompetition why_did_apc_become_subtask_competition;
  why_did_apc_become_subtask_competition.SetInputs();
  why_did_apc_become_subtask_competition.Calculate();
  why_did_apc_become_subtask_competition.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "380";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(WhyDidAPCBecomeSubtaskCompetitionTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "8 7 5\n1 3\n2 5\n3 5\n4 8\n5 8\n6 9\n7 10";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  WhyDidAPCBecomeSubtaskCompetition why_did_apc_become_subtask_competition;
  why_did_apc_become_subtask_competition.SetInputs();
  why_did_apc_become_subtask_competition.Calculate();
  why_did_apc_become_subtask_competition.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "660";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(WhyDidAPCBecomeSubtaskCompetitionTest, SimpleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "8 9 5\n1 8\n3 10\n4 5\n5 20\n7 12\n8 15\n9 50\n14 14";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  WhyDidAPCBecomeSubtaskCompetition why_did_apc_become_subtask_competition;
  why_did_apc_become_subtask_competition.SetInputs();
  why_did_apc_become_subtask_competition.Calculate();
  why_did_apc_become_subtask_competition.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "580";

  EXPECT_EQ(oss.str(), expected_output);
}