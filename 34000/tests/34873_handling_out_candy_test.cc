#include "34000/src/34873_handling_out_candy.h"

#include "test_headers/test_helper.h"

class HandlingOutCandyTest : public IOTestFixture<HandlingOutCandy> {};

TEST_F(HandlingOutCandyTest, SampleCase) { RunTest("3\n1 2 2 3 3 4", "Yes"); }

TEST_F(HandlingOutCandyTest, SampleCase2) { RunTest("3\n1 2 3 3 3 4", "No"); }
