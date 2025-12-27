#include "30000/src/30008_junes_grade.h"

#include "test_headers/test_helper.h"

class JunesGradeTest : public IOTestFixture<JunesGrade> {};

TEST_F(JunesGradeTest, SimpleCase) {
  RunTest("255 5\n30 37 50 7 35", "2 3 3 1 3 ");
}

TEST_F(JunesGradeTest, SimpleCase2) {
  RunTest("255 5\n1 1 1 1 1", "1 1 1 1 1 ");
}

TEST_F(JunesGradeTest, SimpleCase3) {
  RunTest("100 9\n4 11 23 40 60 77 89 96 100", "1 2 3 4 5 6 7 8 9 ");
}
