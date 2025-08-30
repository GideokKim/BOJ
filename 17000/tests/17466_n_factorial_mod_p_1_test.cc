#include "17000/src/17466_n_factorial_mod_p_1.h"

#include "test_headers/test_helper.h"

class NFactorialModP1Test : public IOTestFixture<NFactorialModP1> {};

TEST_F(NFactorialModP1Test, SimpleCase) { RunTest("4 7", "3"); }

TEST_F(NFactorialModP1Test, SimpleCase2) {
  RunTest("99999988 99999989", "99999988");
}
