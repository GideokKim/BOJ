#include "9000/src/9498_test_scores.h"
#include "test_headers/test_helper.h"

class TestScoresTest : public IOTestFixture<TestScores> {};

TEST_F(TestScoresTest, SampleCase) { RunTest("100\n", "A"); }
