#include "14000/src/14656_ta_is_sadist.h"

#include "test_headers/test_helper.h"

class TaIsSadistTest : public IOTestFixture<TaIsSadist> {};

TEST_F(TaIsSadistTest, SampleCase) { RunTest("5\n3 2 5 4 1", "3"); }
