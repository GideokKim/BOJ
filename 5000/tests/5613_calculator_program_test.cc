#include "5000/src/5613_calculator_program.h"

#include "test_headers/test_helper.h"

class CalculatorProgramTest : public IOTestFixture<CalculatorProgram> {};

TEST_F(CalculatorProgramTest, SampleCase) { RunTest("1\n+\n1\n=", "2"); }

TEST_F(CalculatorProgramTest, SampleCase2) {
  RunTest("10\n-\n21\n*\n5\n=", "-55");
}

TEST_F(CalculatorProgramTest, SampleCase3) {
  RunTest("100\n/\n3\n*\n3\n=", "99");
}
