#include "31000/src/31654_adding_trouble.h"

#include "test_headers/test_helper.h"

class AddingTroubleTest : public IOTestFixture<AddingTrouble> {};

TEST_F(AddingTroubleTest, SampleCase) { RunTest("2 3 5", "correct!"); }

TEST_F(AddingTroubleTest, SampleCase2) { RunTest("1 1 3", "wrong!"); }

TEST_F(AddingTroubleTest, SampleCase3) { RunTest("-1 1 0", "correct!"); }
