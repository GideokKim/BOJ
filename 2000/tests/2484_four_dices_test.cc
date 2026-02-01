#include "2000/src/2484_four_dices.h"

#include "test_headers/test_helper.h"

class FourDicesTest : public IOTestFixture<FourDices> {};

TEST_F(FourDicesTest, SampleCase) {
  RunTest("4\n3 3 3 3\n3 3 6 3\n2 2 6 6\n6 2 1 5", "65000");
}
