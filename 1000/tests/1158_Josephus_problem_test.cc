#include "1000/src/1158_Josephus_problem.h"

#include "test_headers/test_helper.h"

class JosephusProblemTest : public IOTestFixture<JosephusProblem> {};

TEST_F(JosephusProblemTest, SampleCase) {
  RunTest("7 3\n", "<3, 6, 2, 7, 5, 1, 4>");
}
