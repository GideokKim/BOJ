#include "30000/src/30031_counting_bill.h"

#include "test_headers/test_helper.h"

class CountingBillTest : public IOTestFixture<CountingBill> {};

TEST_F(CountingBillTest, SimpleCase) { RunTest("1\n136 68", "1000"); }

TEST_F(CountingBillTest, SimpleCase2) {
  RunTest("4\n136 68\n142 68\n148 68\n154 68", "66000");
}
