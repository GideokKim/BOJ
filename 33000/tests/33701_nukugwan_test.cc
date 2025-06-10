#include "33000/src/33701_nukugwan.h"

#include "test_headers/test_helper.h"

class NukugwanTest : public IOTestFixture<Nukugwan> {};

TEST_F(NukugwanTest, SampleCase) { RunTest("", "nukugwan"); }
