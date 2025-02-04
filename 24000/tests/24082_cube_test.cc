#include "24000/src/24082_cube.h"

#include "test_headers/test_helper.h"

class CubeTest : public IOTestFixture<Cube> {};

TEST_F(CubeTest, SampleCase) { RunTest("4", "64"); }

TEST_F(CubeTest, SampleCase2) { RunTest("1", "1"); }

TEST_F(CubeTest, SampleCase3) { RunTest("999", "997002999"); }
