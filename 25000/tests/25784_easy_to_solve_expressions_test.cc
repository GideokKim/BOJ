#include "25000/src/25784_easy_to_solve_expressions.h"

#include "test_headers/test_helper.h"

class EasyToSolveExpressionsTest
    : public IOTestFixture<EasyToSolveExpressions> {};

TEST_F(EasyToSolveExpressionsTest, SampleCase) { RunTest("10 30 20", "1"); }

TEST_F(EasyToSolveExpressionsTest, SampleCase2) { RunTest("10 20 200", "2"); }

TEST_F(EasyToSolveExpressionsTest, SampleCase3) { RunTest("100 5 700", "3"); }
