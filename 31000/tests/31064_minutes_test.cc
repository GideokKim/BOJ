#include "31000/src/31064_minutes.h"

#include "test_headers/test_helper.h"

class MinutesTest : public IOTestFixture<Minutes> {};

TEST_F(MinutesTest, SampleCase) { RunTest("8\n30", "510"); }

TEST_F(MinutesTest, SampleCase2) { RunTest("14\n0", "840"); }

TEST_F(MinutesTest, SampleCase3) { RunTest("0\n29", "29"); }

TEST_F(MinutesTest, SampleCase4) { RunTest("23\n59", "1439"); }
