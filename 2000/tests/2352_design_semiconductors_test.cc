#include "2000/src/2352_design_semiconductors.h"

#include "test_headers/test_helper.h"

class DesignSemiconductorsTest : public IOTestFixture<DesignSemiconductors> {};

TEST_F(DesignSemiconductorsTest, SampleCase) { RunTest("6\n4 2 6 3 1 5", "3"); }
