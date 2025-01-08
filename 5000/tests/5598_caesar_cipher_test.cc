#include "5000/src/5598_caesar_cipher.h"

#include <gtest/gtest.h>

TEST(CaesarCipherTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "MRL";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  CaesarCipher caesar_cipher;
  caesar_cipher.SetInputs();
  caesar_cipher.Decode();
  caesar_cipher.PrintOutput();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "JOI\n";

  EXPECT_EQ(oss.str(), expected_output);
}

TEST(CaesarCipherTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();
  std::streambuf* orig_cout = std::cout.rdbuf();

  std::string input = "FURDWLD";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  std::ostringstream oss;
  std::cout.rdbuf(oss.rdbuf());

  CaesarCipher caesar_cipher;
  caesar_cipher.SetInputs();
  caesar_cipher.Decode();
  caesar_cipher.PrintOutput();

  std::cin.rdbuf(orig_cin);
  std::cout.rdbuf(orig_cout);

  std::string expected_output = "CROATIA\n";

  EXPECT_EQ(oss.str(), expected_output);
}
