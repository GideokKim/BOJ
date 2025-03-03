#include "10000/src/10926_surprise.h"

#include "test_headers/test_helper.h"

class SurpriseTest : public IOTestFixture<Surprise> {};

TEST_F(SurpriseTest, SimpleCase) { RunTest("joonas", "joonas??!"); }

TEST_F(SurpriseTest, EdgeCase) { RunTest("baekjoon", "baekjoon??!"); }