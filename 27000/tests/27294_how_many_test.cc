#include "27000/src/27294_how_many.h"

#include "test_headers/test_helper.h"

class HowManyTest : public IOTestFixture<HowMany> {};

TEST_F(HowManyTest, SampleCase) { RunTest("16 0", "320"); }

TEST_F(HowManyTest, SampleCase2) { RunTest("14 1", "280"); }

TEST_F(HowManyTest, SampleCase3) { RunTest("17 0", "280"); }

TEST_F(HowManyTest, SampleCase4) { RunTest("10 1", "280"); }

TEST_F(HowManyTest, SampleCase5) { RunTest("10 0", "280"); }
