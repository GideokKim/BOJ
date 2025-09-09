#include "31000/src/31780_phoenix.h"

#include "test_headers/test_helper.h"

class PhoenixTest : public IOTestFixture<Phoenix> {};

TEST_F(PhoenixTest, SampleCase) { RunTest("3 2", "9"); }

TEST_F(PhoenixTest, SampleCase2) { RunTest("5 1", "10"); }

TEST_F(PhoenixTest, SampleCase3) { RunTest("427 0", "427"); }
