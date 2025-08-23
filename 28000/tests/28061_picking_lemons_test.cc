#include "28000/src/28061_picking_lemons.h"

#include "test_headers/test_helper.h"

class PickingLemonsTest : public IOTestFixture<PickingLemons> {};

TEST_F(PickingLemonsTest, SampleCase) { RunTest("3\n2 3 4", "3"); }

TEST_F(PickingLemonsTest, SampleCase2) { RunTest("4\n100 97 90 12", "96"); }
