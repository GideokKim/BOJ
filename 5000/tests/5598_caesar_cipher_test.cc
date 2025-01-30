#include "5000/src/5598_caesar_cipher.h"

#include "test_headers/test_helper.h"

class CaesarCipherTest : public IOTestFixture<CaesarCipher> {};

TEST_F(CaesarCipherTest, SampleCase) { RunTest("MRL", "JOI"); }

TEST_F(CaesarCipherTest, SampleCase2) { RunTest("FURDWLD", "CROATIA"); }
