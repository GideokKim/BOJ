#include "32000/src/32280_tardy_student.h"

#include "test_headers/test_helper.h"

class TardyStudentTest : public IOTestFixture<TardyStudent> {};

TEST_F(TardyStudentTest, SimpleCase) {
  RunTest(
      "5\n15:52 student\n08:18 student\n13:12 student\n16:12 student\n15:52 "
      "teacher\n13:47 student\n09:18",
      "2");
}

TEST_F(TardyStudentTest, SimpleCase2) {
  RunTest("2\n08:30 student\n09:30 student\n07:30 teacher\n10:00", "0");
}
