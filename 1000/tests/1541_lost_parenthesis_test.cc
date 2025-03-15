#include "1000/src/1541_lost_parenthesis.h"

#include "test_headers/test_helper.h"

class LostParenthesisTest : public IOTestFixture<LostParenthesis> {};

TEST_F(LostParenthesisTest, SampleCase) { RunTest("55-50+40", "-35"); }

TEST_F(LostParenthesisTest, SampleCase2) { RunTest("10+20+30+40", "100"); }

TEST_F(LostParenthesisTest, SampleCase3) {
  RunTest("1+2+3+4-5-6-7-8-9-10", "-35");
}

TEST_F(LostParenthesisTest, SampleCase4) { RunTest("00009-00009", "0"); }

TEST_F(LostParenthesisTest, SampleCase5) {
  RunTest("1-2+3-4+5-6+7-8+9-10", "-53");
}

TEST_F(LostParenthesisTest, SampleCase6) {
  RunTest("1-2-3-4-5-6-7-8-9-10", "-53");
}

TEST_F(LostParenthesisTest, SampleCase7) { RunTest("1+10", "11"); }
