#include "34000/src/34534_form_a_straight.h"

#include "test_headers/test_helper.h"

class FormAStraightTest : public IOTestFixture<FormAStraight> {};

TEST_F(FormAStraightTest, SampleCase) { RunTest("1 3 4 5 9", "1"); }

TEST_F(FormAStraightTest, SampleCase2) { RunTest("1 2 3 4 5", "0"); }

TEST_F(FormAStraightTest, SampleCase3) { RunTest("3 1 9 7 5", "2"); }