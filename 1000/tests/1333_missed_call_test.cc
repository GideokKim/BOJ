#include "1000/src/1333_missed_call.h"

#include "test_headers/test_helper.h"

class MissedCallTest : public IOTestFixture<MissedCall> {};

TEST_F(MissedCallTest, SampleCase) { RunTest("2 5 7", "7"); }

TEST_F(MissedCallTest, SampleCase2) { RunTest("4 5 20", "40"); }

TEST_F(MissedCallTest, SampleCase3) { RunTest("6 9 20", "40"); }
