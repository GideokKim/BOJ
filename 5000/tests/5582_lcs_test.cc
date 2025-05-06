#include "5000/src/5582_lcs.h"

#include "test_headers/test_helper.h"

class LCS_Test : public IOTestFixture<LCS> {};

TEST_F(LCS_Test, SampleCase) { RunTest("ABRACADABRA\nECADADABRBCRDARA", "5"); }

TEST_F(LCS_Test, SampleCase2) {
  RunTest("UPWJCIRUCAXIIRGL\nSBQNYBSBZDFNEV", "0");
}
