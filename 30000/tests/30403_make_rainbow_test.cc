#include "30000/src/30403_make_rainbow.h"

#include "test_headers/test_helper.h"

class MakeRainbowTest : public IOTestFixture<MakeRainbow> {};

TEST_F(MakeRainbowTest, SimpleCase) { RunTest("7\nroygbiv", "yes"); }

TEST_F(MakeRainbowTest, SimpleCase2) { RunTest("7\nROYGBIV", "YES"); }

TEST_F(MakeRainbowTest, SimpleCase3) { RunTest("14\nrRoOyYgGbBiIvV", "YeS"); }

TEST_F(MakeRainbowTest, SimpleCase4) { RunTest("7\nrainbow", "NO!"); }
