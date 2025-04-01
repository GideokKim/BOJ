#include "11000/src/11880_ant.h"

#include "test_headers/test_helper.h"

class AntTest : public IOTestFixture<Ant> {};

TEST_F(AntTest, SampleCase) { RunTest("1\n1 2 3\n", "18\n"); }
