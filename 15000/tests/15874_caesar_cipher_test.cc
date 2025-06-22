#include "15000/src/15874_caesar_cipher.h"

#include "test_headers/test_helper.h"

class CaesarCipherTest : public IOTestFixture<CaesarCipher> {};

TEST_F(CaesarCipherTest, SampleCase) {
  RunTest("4 10\nI AM JOHN.", "M EQ NSLR.");
}

TEST_F(CaesarCipherTest, SampleCase2) {
  RunTest("26 10\nI AM JOHN.", "I AM JOHN.");
}

TEST_F(CaesarCipherTest, SampleCase3) {
  RunTest("5 37\nI love Red Black Tree, how about you.",
          "N qtaj Wji Gqfhp Ywjj, mtb fgtzy dtz.");
}