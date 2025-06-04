#include "25000/src/25305_cutline.h"

#include "test_headers/test_helper.h"

class CutlineTest : public IOTestFixture<Cutline> {};

TEST_F(CutlineTest, SampleCase) { RunTest("5 2\n100 76 85 93 98", "98"); }
