#include "4000/src/4597_parity.h"

#include "test_headers/test_helper.h"

class ParityTest : public IOTestFixture<Parity> {};

TEST_F(ParityTest, SampleCase) {
  RunTest("101e\n010010o\n1e\n000e\n110100101o\n#",
          "1010\n0100101\n11\n0000\n1101001010\n");
}
