#include "5000/src/5597_who_didnt_turn_in_report.h"

#include <gtest/gtest.h>

TEST(WhoDidntTurnInReportTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "3\n1\n4\n5\n7\n9\n6\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22"
      "\n23\n24\n25\n26\n27\n28\n29\n30\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  WhoDidntTurnInReport who_didnt_turn_in_report;
  who_didnt_turn_in_report.SetInputs();
  who_didnt_turn_in_report.PrintOutput();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2\n8\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(WhoDidntTurnInReportTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input =
      "9\n30\n6\n12\n10\n20\n21\n11\n7\n5\n28\n4\n18\n29\n17\n19\n27\n13\n16\n2"
      "6\n14\n23\n22\n15\n3\n1\n24\n25\n";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  WhoDidntTurnInReport who_didnt_turn_in_report;
  who_didnt_turn_in_report.SetInputs();
  who_didnt_turn_in_report.PrintOutput();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2\n8\n";

  EXPECT_EQ(oss.str(), expected_output);
}
