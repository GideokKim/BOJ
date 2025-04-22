#include "31000/src/31822_retaking_courses.h"

#include "test_headers/test_helper.h"

class RetakingCoursesTest : public IOTestFixture<RetakingCourses> {};

TEST_F(RetakingCoursesTest, SimpleCase) {
  RunTest(
      "000200D-18\n"
      "5\n"
      "000200D-18\n"
      "000200C-01\n"
      "000210D-18\n"
      "660820A-01\n"
      "0002000-00",
      "3");
}
