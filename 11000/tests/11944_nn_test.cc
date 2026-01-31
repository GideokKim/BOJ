#include "11000/src/11944_nn.h"

#include "test_headers/test_helper.h"

class NNTest : public IOTestFixture<NN> {};

TEST_F(NNTest, SampleCase) { RunTest("20 16", "2020202020202020"); }
