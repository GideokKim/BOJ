#include "6000/src/6500_create_random_number.h"

#include "test_headers/test_helper.h"

class CreateRandomNumberTest : public IOTestFixture<CreateRandomNumber> {};

TEST_F(CreateRandomNumberTest, SampleCase) {
  RunTest("5555\n0815\n6239\n0", "32\n17\n111\n");
}

TEST_F(CreateRandomNumberTest, SampleCase2) { RunTest("1\n0", "2\n"); }
