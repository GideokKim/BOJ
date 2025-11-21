#include "29000/src/29720_so_how_many_problems_did_you_solve.h"

#include "test_headers/test_helper.h"

class SoHowManyProblemsDidYouSolveTest
    : public IOTestFixture<SoHowManyProblemsDidYouSolve> {};

TEST_F(SoHowManyProblemsDidYouSolveTest, SimpleCase) {
  RunTest("1000 5 128", "360 364");
}

TEST_F(SoHowManyProblemsDidYouSolveTest, SimpleCase2) {
  RunTest("10 9 2", "0 0");
}

TEST_F(SoHowManyProblemsDidYouSolveTest, SimpleCase3) {
  RunTest("10 2000 1", "0 9");
}
