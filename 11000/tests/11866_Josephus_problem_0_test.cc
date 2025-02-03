#include "11000/src/11866_Josephus_problem_0.h"

#include "test_headers/test_helper.h"

class JosephusProblem0Test : public IOTestFixture<JosephusProblem0> {};

TEST_F(JosephusProblem0Test, SampleCase) {
  RunTest("7 3\n", "<3, 6, 2, 7, 5, 1, 4>");
}
