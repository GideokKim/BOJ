#include "6000/src/6321_ibm_minus_1.h"

#include "test_headers/test_helper.h"

class IbmMinus1Test : public IOTestFixture<IbmMinus1> {};

TEST_F(IbmMinus1Test, SampleCase) {
  RunTest("2\nHAL\nSWERC",
          "String #1\n"
          "IBM\n\n"
          "String #2\n"
          "TXFSD\n\n");
}
