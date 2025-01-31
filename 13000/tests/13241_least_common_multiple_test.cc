#include "13000/src/13241_least_common_multiple.h"

#include "test_headers/test_helper.h"

class LeastCommonMultipleTest : public IOTestFixture<LeastCommonMultiple> {};

TEST_F(LeastCommonMultipleTest, SampleCase) { RunTest("1 1", "1"); }

TEST_F(LeastCommonMultipleTest, SampleCase2) { RunTest("3 5", "15"); }

TEST_F(LeastCommonMultipleTest, SampleCase3) { RunTest("12 18", "36"); }

TEST_F(LeastCommonMultipleTest, SampleCase4) { RunTest("1 123", "123"); }

TEST_F(LeastCommonMultipleTest, SampleCase5) { RunTest("121 199", "24079"); }

TEST_F(LeastCommonMultipleTest, SampleCase6) {
  RunTest("123 1234567890", "50617283490");
}
