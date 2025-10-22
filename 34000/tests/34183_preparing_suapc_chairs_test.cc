#include "34000/src/34183_preparing_suapc_chairs.h"

#include "test_headers/test_helper.h"

class PreparingSuapcChairsTest : public IOTestFixture<PreparingSuapcChairs> {};

TEST_F(PreparingSuapcChairsTest, SampleCase) { RunTest("4 3 2 1", "19"); }

TEST_F(PreparingSuapcChairsTest, SampleCase2) { RunTest("1 8 8 5", "0"); }
