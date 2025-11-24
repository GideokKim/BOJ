

#include "27000/src/27982_cubes.h"

#include "test_headers/test_helper.h"

class CubesTest : public IOTestFixture<Cubes> {};

TEST_F(CubesTest, SampleCase) { RunTest("3 1\n1 1 1", "0"); }

TEST_F(CubesTest, SampleCase2) {
  RunTest("3 7\n2 2 2\n1 2 2\n3 2 2\n2 1 2\n2 3 2\n2 2 1\n2 2 3", "1");
}
