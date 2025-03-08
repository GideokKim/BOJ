#include "15000/src/15740_a_plus_b_9.h"

#include "test_headers/test_helper.h"

class APlusB9Test : public IOTestFixture<APlusB9> {};

TEST_F(APlusB9Test, SampleCase) { RunTest("1 2", "3"); }

TEST_F(APlusB9Test, SampleCase2) { RunTest("-60 40", "-20"); }

TEST_F(APlusB9Test, SampleCase3) { RunTest("-999999999 1000000000", "1"); }

TEST_F(APlusB9Test, SampleCase4) {
  RunTest("1099511627776 1073741824", "1100585369600");
}

TEST_F(APlusB9Test, SampleCase5) {
  RunTest("123456789123456789123456789 987654321987654321987654321",
          "1111111111111111111111111110");
}
