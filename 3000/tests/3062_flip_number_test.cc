#include "3000/src/3062_flip_number.h"

#include "test_headers/test_helper.h"

class FlipNumberTest : public IOTestFixture<FlipNumber> {};

TEST_F(FlipNumberTest, SampleCase) {
  RunTest("4\n13\n58\n120\n5056", "YES\nNO\nYES\nNO\n");
}
