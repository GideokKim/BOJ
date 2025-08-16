#include "5000/src/5555_ring.h"

#include "test_headers/test_helper.h"

class RingTest : public IOTestFixture<Ring> {};

TEST_F(RingTest, SampleCase) {
  RunTest("ABCD\n3\nABCDXXXXXX\nYYYYABCDXX\nDCBAZZZZZZ", "2");
}

TEST_F(RingTest, SampleCase2) { RunTest("XYZ\n1\nZAAAAAAAXY", "1"); }

TEST_F(RingTest, SampleCase3) {
  RunTest("PQR\n3\nPQRAAAAPQR\nBBPQRBBBBB\nCCCCCCCCCC", "2");
}
