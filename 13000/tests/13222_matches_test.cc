#include "13000/src/13222_matches.h"

#include "test_headers/test_helper.h"

class MatchesTest : public IOTestFixture<Matches> {};

TEST_F(MatchesTest, SampleCase) {
  RunTest("5 3 4\n3\n4\n5\n6\n7", "YES\nYES\nYES\nNO\nNO\n");
}

TEST_F(MatchesTest, SimpleCase2) { RunTest("2 12 17\n21\n20", "NO\nYES\n"); }
