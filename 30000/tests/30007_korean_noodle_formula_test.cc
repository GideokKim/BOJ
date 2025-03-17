#include "30000/src/30007_korean_noodle_formula.h"

#include "test_headers/test_helper.h"

class KoreanNoodleFormulaTest : public IOTestFixture<KoreanNoodleFormula> {};

TEST_F(KoreanNoodleFormulaTest, SimpleCase) {
  RunTest("2\n500 550 4\n450 500 7", "2050\n3200\n");
}
