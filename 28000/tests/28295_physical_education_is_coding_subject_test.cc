#include "28000/src/28295_physical_education_is_coding_subject.h"

#include <gtest/gtest.h>

TEST(PhysicalEducationIsCodingSubjectTest, SimpleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "1\n2\n3\n1\n2\n3\n1\n2\n3\n1";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  PhysicalEducationIsCodingSubject physical_education_is_coding_subject;
  physical_education_is_coding_subject.SetInputs();
  std::string result = physical_education_is_coding_subject.Calculate();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, "W");
}
