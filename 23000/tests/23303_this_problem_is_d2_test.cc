#include "23000/src/23303_this_problem_is_d2.h"

#include "test_headers/test_helper.h"

class ThisProblemIsD2Test : public IOTestFixture<ThisProblemIsD2> {};

TEST_F(ThisProblemIsD2Test, SimpleCase) { RunTest("naver d2", "D2"); }

TEST_F(ThisProblemIsD2Test, SimpleCase2) { RunTest("naver d3", "unrated"); }
