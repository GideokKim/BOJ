#include "25000/src/25177_find_seogang_history.h"

#include "test_headers/test_helper.h"

class FindSeogangHistoryTest : public IOTestFixture<FindSeogangHistory> {};

TEST_F(FindSeogangHistoryTest, SampleCase) {
  RunTest("5 5\n1 2 3 4 5\n5 4 3 2 1", "4");
}

TEST_F(FindSeogangHistoryTest, AllFCase) {
  RunTest("5 6\n1 2 3 2 1\n2 2 2 2 2 10", "10");
}

TEST_F(FindSeogangHistoryTest, AllSCase) {
  RunTest("5 3\n1 2 3 2 1\n1 1 3", "0");
}
