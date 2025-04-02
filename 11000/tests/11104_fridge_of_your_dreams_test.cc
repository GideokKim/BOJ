#include "11000/src/11104_fridge_of_your_dreams.h"

#include "test_headers/test_helper.h"

class FridgeOfYourDreamsTest : public IOTestFixture<FridgeOfYourDreams> {};

TEST_F(FridgeOfYourDreamsTest, SampleCase) {
  RunTest(
      "5\n"
      "000000000000000000000001\n"
      "000000000001010101010101\n"
      "000000000000000000001010\n"
      "101011001010101100101101\n"
      "111111111111111111111111",
      "1\n"
      "5461\n"
      "10\n"
      "11316013\n"
      "16777215\n");
}
