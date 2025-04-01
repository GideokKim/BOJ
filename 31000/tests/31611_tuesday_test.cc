#include "31000/src/31611_tuesday.h"

#include "test_headers/test_helper.h"

class TuesdayTest : public IOTestFixture<Tuesday> {};

TEST_F(TuesdayTest, SampleCase) { RunTest("2", "1"); }

TEST_F(TuesdayTest, SampleCase2) { RunTest("10", "0"); }

TEST_F(TuesdayTest, SampleCase3) { RunTest("100", "1"); }