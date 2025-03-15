#include "2000/src/2903_planina.h"

#include "test_headers/test_helper.h"

class PlaninaTest : public IOTestFixture<Planina> {};

TEST_F(PlaninaTest, SampleCase) { RunTest("1", "9"); }

TEST_F(PlaninaTest, SampleCase2) { RunTest("2", "25"); }

TEST_F(PlaninaTest, SampleCase3) { RunTest("5", "1089"); }
