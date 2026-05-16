#include "34000/src/34824_yonsei_vs_korea.h"

#include "test_headers/test_helper.h"

class YonseiVsKoreaTest : public IOTestFixture<YonseiVsKorea> {};

TEST_F(YonseiVsKoreaTest, SampleCase) {
  RunTest("5\nyonsei\nsogang\nhongik\nkorea\newha", "Yonsei Won!");
}

TEST_F(YonseiVsKoreaTest, SampleCase2) {
  RunTest("2\nkorea\nyonsei", "Yonsei Lost...");
}
