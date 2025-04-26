#include "24000/src/24883_auto_completion.h"

#include "test_headers/test_helper.h"

class AutoCompletionTest : public IOTestFixture<AutoCompletion> {};

TEST_F(AutoCompletionTest, SampleCase) { RunTest("N", "Naver D2"); }

TEST_F(AutoCompletionTest, SampleCase2) { RunTest("n", "Naver D2"); }

TEST_F(AutoCompletionTest, SampleCase3) { RunTest("A", "Naver Whale"); }

TEST_F(AutoCompletionTest, SampleCase4) { RunTest("g", "Naver Whale"); }
