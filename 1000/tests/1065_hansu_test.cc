#include "1000/src/1065_hansu.h"

#include "test_headers/test_helper.h"

class HansuTest : public IOTestFixture<Hansu> {};

TEST_F(HansuTest, SampleCase) { RunTest("110", "99"); }

TEST_F(HansuTest, SampleCase2) { RunTest("1", "1"); }

TEST_F(HansuTest, SampleCase3) { RunTest("210", "105"); }

TEST_F(HansuTest, SampleCase4) { RunTest("1000", "144"); }

TEST_F(HansuTest, SampleCase5) { RunTest("500", "119"); }
