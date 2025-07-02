#include "28000/src/28431_matching_socks.h"

#include "test_headers/test_helper.h"

class MatchingSocksTest : public IOTestFixture<MatchingSocks> {};

TEST_F(MatchingSocksTest, SampleCase) { RunTest("6\n8\n6\n3\n8", "3"); }

TEST_F(MatchingSocksTest, SampleCase2) { RunTest("9\n9\n9\n0\n0", "9"); }