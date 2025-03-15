#include "2000/src/2562_maximum_value.h"

#include "test_headers/test_helper.h"

class MaximumValueTest : public IOTestFixture<MaximumValue> {};

TEST_F(MaximumValueTest, SampleCase) {
  RunTest("3\n29\n38\n12\n57\n74\n40\n85\n61\n", "85\n8");
}
