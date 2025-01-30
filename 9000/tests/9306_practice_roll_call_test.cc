#include "9000/src/9306_practice_roll_call.h"

#include "test_headers/test_helper.h"

class PracticeRollCallTest : public IOTestFixture<PracticeRollCall> {};

TEST_F(PracticeRollCallTest, SimpleCase) {
  RunTest(
      "5\nTyler\nLopez\nAlexandra\nJohnson\nMartin\nYoung\nSabrina\nChao\nArjun"
      "\nGupta",
      "Case 1: Lopez, Tyler\n"
      "Case 2: Johnson, Alexandra\n"
      "Case 3: Young, Martin\n"
      "Case 4: Chao, Sabrina\n"
      "Case 5: Gupta, Arjun\n");
}
