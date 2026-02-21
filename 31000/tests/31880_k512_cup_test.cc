#include "31000/src/31880_k512_cup.h"

#include "test_headers/test_helper.h"

class k512_cupTest : public IOTestFixture<k512_cup> {};

TEST_F(k512_cupTest, SimpleCase) { RunTest("2 2\n1 3\n2 5", "40"); }

TEST_F(k512_cupTest, SimpleCase2) { RunTest("3 4\n5 1 2\n2 0 2 4", "128"); }

TEST_F(k512_cupTest, SimpleCase3) {
  RunTest("1 10\n1\n10 10 10 10 10 10 10 10 10 10", "10000000000");
}
