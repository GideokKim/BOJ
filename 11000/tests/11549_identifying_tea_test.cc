#include "11000/src/11549_identifying_tea.h"

#include "test_headers/test_helper.h"

class IdentifyingTeaTest : public IOTestFixture<IdentifyingTea> {};

TEST_F(IdentifyingTeaTest, SampleCase) { RunTest("1\n1 2 3 2 1", "2"); }

TEST_F(IdentifyingTeaTest, SampleCase2) { RunTest("3\n4 1 1 2 1", "0"); }
