#include "25000/src/25304_receipt.h"

#include "test_headers/test_helper.h"

class ReceiptTest : public IOTestFixture<Receipt> {};

TEST_F(ReceiptTest, SampleCase) {
  RunTest("260000\n4\n20000 5\n30000 2\n10000 6\n5000 8\n", "Yes");
}

TEST_F(ReceiptTest, SampleCase2) {
  RunTest("250000\n4\n20000 5\n30000 2\n10000 6\n5000 8\n", "No");
}
