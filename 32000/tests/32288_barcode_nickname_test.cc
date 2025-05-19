#include "32000/src/32288_barcode_nickname.h"

#include "test_headers/test_helper.h"

class BarcodeNicknameTest : public IOTestFixture<BarcodeNickname> {};

TEST_F(BarcodeNicknameTest, SimpleCase) {
  RunTest("10\nIllIllIlIl", "iLLiLLiLiL");
}
