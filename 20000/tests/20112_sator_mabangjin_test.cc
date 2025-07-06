#include "20000/src/20112_sator_mabangjin.h"

#include "test_headers/test_helper.h"

class SatorMabangjinTest : public IOTestFixture<SatorMabangjin> {};

TEST_F(SatorMabangjinTest, SimpleCase) { RunTest("3\nAAB\nACD\nBDE", "YES"); }

TEST_F(SatorMabangjinTest, SimpleCase2) {
  RunTest("4\nAPPL\nPPAP\nPADD\nLPOV", "NO");
}
