#include "34000/src/34849_twice_for_statement.h"

#include "test_headers/test_helper.h"

class TwiceForStatementTest : public IOTestFixture<TwiceForStatement> {};

TEST_F(TwiceForStatementTest, SampleCase) { RunTest("1000", "Accepted"); }

TEST_F(TwiceForStatementTest, SampleCase2) {
  RunTest("100000", "Time limit exceeded");
}
