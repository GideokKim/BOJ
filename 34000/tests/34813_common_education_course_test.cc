#include "34000/src/34813_common_education_course.h"

#include "test_headers/test_helper.h"

class CommonEducationCourseTest : public IOTestFixture<CommonEducationCourse> {
};

TEST_F(CommonEducationCourseTest, SampleCase) {
  RunTest("F31.104L", "Foundation");
}

TEST_F(CommonEducationCourseTest, SampleCase2) { RunTest("C20.106", "Claves"); }

TEST_F(CommonEducationCourseTest, SampleCase3) {
  RunTest("V10.105", "Veritas");
}

TEST_F(CommonEducationCourseTest, SampleCase4) {
  RunTest("E43.118", "Exploration");
}