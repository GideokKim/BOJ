#include "14000/src/14579_add_and_mul.h"

#include "test_headers/test_helper.h"

class AddAndMulTest : public IOTestFixture<AddAndMul> {};

TEST_F(AddAndMulTest, SampleCase) { RunTest("3 5", "900"); }
