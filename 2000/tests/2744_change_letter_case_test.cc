#include "2000/src/2744_change_letter_case.h"

#include "test_headers/test_helper.h"

class ChangeLetterCaseTest : public IOTestFixture<ChangeLetterCase> {};

TEST_F(ChangeLetterCaseTest, SampleCase) {
  RunTest("WrongAnswer", "wRONGaNSWER");
}
