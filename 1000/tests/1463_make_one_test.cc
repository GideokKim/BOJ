#include "1000/src/1463_make_one.h"

#include "test_headers/test_helper.h"

class MakeOneTest : public IOTestFixture<MakeOne> {};

TEST_F(MakeOneTest, SampleCase) { RunTest("2\n", "1"); }

TEST_F(MakeOneTest, SampleCase2) { RunTest("10\n", "3"); }

TEST_F(MakeOneTest, SampleCase3) { RunTest("1000000\n", "19"); }