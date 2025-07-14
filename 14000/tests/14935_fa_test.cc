#include "14000/src/14935_fa.h"

#include "test_headers/test_helper.h"

class FATest : public IOTestFixture<FA> {};

TEST_F(FATest, SampleCase) { RunTest("932", "FA"); }
