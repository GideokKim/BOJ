#include "13000/src/13410_reverse_99dan.h"

#include "test_headers/test_helper.h"

class Reverse99DanTest : public IOTestFixture<Reverse99Dan> {};

TEST_F(Reverse99DanTest, SampleCase) { RunTest("8 9", "84"); }

TEST_F(Reverse99DanTest, SampleCase2) { RunTest("54 9", "873"); }