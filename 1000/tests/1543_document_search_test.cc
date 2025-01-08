#include "1000/src/1543_document_search.h"

#include <gtest/gtest.h>

TEST(DocumentSearchTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "ababababa\naba";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  DocumentSearch document_search;
  document_search.SetInput();
  document_search.Calculate();
  document_search.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(DocumentSearchTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "a a a a a\na a";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  DocumentSearch document_search;
  document_search.SetInput();
  document_search.Calculate();
  document_search.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "2";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(DocumentSearchTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "ababababa\nababa";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  DocumentSearch document_search;
  document_search.SetInput();
  document_search.Calculate();
  document_search.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "1";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(DocumentSearchTest, SampleCase4) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "aaaaaaa\naa";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  DocumentSearch document_search;
  document_search.SetInput();
  document_search.Calculate();
  document_search.PrintResult();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "3";

  EXPECT_EQ(oss.str(), expected_output);
}