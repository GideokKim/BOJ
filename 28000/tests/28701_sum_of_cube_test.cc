#include "28000/src/28701_sum_of_cube.h"

#include "test_headers/test_helper.h"

class SumOfCubeTest : public IOTestFixture<SumOfCube> {};

TEST_F(SumOfCubeTest, SampleCase) { RunTest("5\n", "15\n225\n225"); }