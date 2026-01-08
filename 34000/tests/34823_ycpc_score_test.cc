#include "34000/src/34823_ycpc_score.h"

#include "test_headers/test_helper.h"

class YcpcScoreTest : public IOTestFixture<YcpcScore> {};

TEST_F(YcpcScoreTest, SampleCase) { RunTest("1 2 1", "1"); }

TEST_F(YcpcScoreTest, SampleCase2) { RunTest("5 4 3", "2"); }
