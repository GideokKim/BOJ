#include "9000/src/9046_decryption.h"

#include "test_headers/test_helper.h"

class DecryptionTest : public IOTestFixture<Decryption> {};

TEST_F(DecryptionTest, SampleCase) {
  RunTest(
      "3\n"
      "asvdge ef ofmdofn\n"
      "xvssc kxvbv\n"
      "hull full suua pmlu",
      "f\n"
      "v\n"
      "?\n");
}
