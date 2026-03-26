#include "34000/src/34750_chuseok_is_always_good.h"

#include "test_headers/test_helper.h"

class ChuseokIsAlwaysGoodTest : public IOTestFixture<ChuseokIsAlwaysGood> {};

TEST_F(ChuseokIsAlwaysGoodTest, SampleCase1) {
  RunTest("200000", "20000 180000");
}

TEST_F(ChuseokIsAlwaysGoodTest, SampleCase2) {
  RunTest("800000", "120000 680000");
}
