#include "21000/src/21200_forced_choice.h"

#include "test_headers/test_helper.h"

class ForcedChoiceTest : public IOTestFixture<ForcedChoice> {};

TEST_F(ForcedChoiceTest, SimpleCase) {
  RunTest("10 3 4\n2 1 5\n5 2 3 7 8 10\n3 2 7 10\n1 8",
          "REMOVE\n"
          "KEEP\n"
          "REMOVE\n"
          "REMOVE\n");
}
