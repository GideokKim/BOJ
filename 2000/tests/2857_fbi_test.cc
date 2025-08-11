#include "2000/src/2857_fbi.h"

#include "test_headers/test_helper.h"

class FBITest : public IOTestFixture<FBI> {};

TEST_F(FBITest, SampleCase) {
  RunTest("1N-FBI1\n9A-USKOK\nI-NTERPOL\nG-MI6\nRF-KGB1", "1 ");
}

TEST_F(FBITest, SampleCase2) {
  RunTest("N321-CIA\nF3-B12I\nF-BI-12\nOVO-JE-CIA\nKRIJUMCAR1", "HE GOT AWAY!");
}

TEST_F(FBITest, SampleCase3) {
  RunTest("47-FBI\nBOND-007\nRF-FBI18\nMARICA-13\n13A-FBILL", "1 3 5 ");
}
