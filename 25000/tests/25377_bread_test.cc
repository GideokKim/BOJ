#include "25000/src/25377_bread.h"

#include "test_headers/test_helper.h"

class BreadTest : public IOTestFixture<Bread> {};

TEST_F(BreadTest, SampleCase) { RunTest("3\n10 20\n15 18\n20 15", "18"); }

TEST_F(BreadTest, SampleCase2) { RunTest("3\n15 13\n17 14\n20 15", "-1"); }