#include "32000/src/32132_it_is_not_playstation.h"

#include "test_headers/test_helper.h"

class ItIsNotPlaystationTest : public IOTestFixture<ItIsNotPlaystation> {};

TEST_F(ItIsNotPlaystationTest, SimpleCase) {
  RunTest("14\nILOVEPS5PSPS4A", "ILOVEPSPSPSA");
}

TEST_F(ItIsNotPlaystationTest, SimpleCase2) { RunTest("6\nPS4564", "PS64"); }

TEST_F(ItIsNotPlaystationTest, SimpleCase3) { RunTest("6\nPPS456", "PPS6"); }

TEST_F(ItIsNotPlaystationTest, SimpleCase4) { RunTest("6\nPSS456", "PSS456"); }

TEST_F(ItIsNotPlaystationTest, SimpleCase5) { RunTest("6\nPSP456", "PSP456"); }

TEST_F(ItIsNotPlaystationTest, SimpleCase6) {
  RunTest("12\nPS45AS45PA45", "PSAS45PA45");
}