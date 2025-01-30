#include "3000/src/3986_good_words.h"

#include "test_headers/test_helper.h"

class GoodWordsTest : public IOTestFixture<GoodWords> {};

TEST_F(GoodWordsTest, SimpleCase) { RunTest("3\nABAB\nAABB\nABBA", "2"); }

TEST_F(GoodWordsTest, SimpleCase2) { RunTest("3\nAAA\nAA\nAB", "1"); }

TEST_F(GoodWordsTest, SimpleCase3) { RunTest("1\nABBABB", "1"); }
