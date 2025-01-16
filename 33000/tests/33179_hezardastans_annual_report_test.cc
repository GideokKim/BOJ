#include "33000/src/33179_hezardastans_annual_report.h"

#include <gtest/gtest.h>

TEST(HezardastansAnnualReportTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "5\n1 1 2 1 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HezardastansAnnualReport hezardastans_annual_report;
  hezardastans_annual_report.SetInputs();
  hezardastans_annual_report.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "5";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(HezardastansAnnualReportTest, SimpleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "8\n1 2 3 2 2 5 4 2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  HezardastansAnnualReport hezardastans_annual_report;
  hezardastans_annual_report.SetInputs();
  hezardastans_annual_report.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "12";

  EXPECT_EQ(oss.str(), expected_output);
}
