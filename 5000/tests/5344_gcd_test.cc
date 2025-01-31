#include "5000/src/5344_gcd.h"

#include "test_headers/test_helper.h"

class GcdTest : public IOTestFixture<Gcd> {};

TEST_F(GcdTest, SampleCase) {
  RunTest("3\n54 24\n33 22\n41 103", "6\n11\n1\n");
}
