#include "11000/src/11721_print_disconnect_ten.h"

#include "test_headers/test_helper.h"

class PrintDisconnectTenTest : public IOTestFixture<PrintDisconnectTen> {};

TEST_F(PrintDisconnectTenTest, SampleCase) {
  RunTest("BaekjoonOnlineJudge", "BaekjoonOn\nlineJudge\n");
}

TEST_F(PrintDisconnectTenTest, SampleCase2) {
  RunTest("OneTwoThreeFourFiveSixSevenEightNineTen",
          "OneTwoThre\n"
          "eFourFiveS\n"
          "ixSevenEig\n"
          "htNineTen\n");
}
