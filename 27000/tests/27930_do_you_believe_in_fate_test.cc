#include "27000/src/27930_do_you_believe_in_fate.h"

#include "test_headers/test_helper.h"

class DoYouBelieveInFateTest : public IOTestFixture<DoYouBelieveInFate> {};

TEST_F(DoYouBelieveInFateTest, SampleCase) { RunTest("KOYONSEREAI", "KOREA"); }

TEST_F(DoYouBelieveInFateTest, SampleCase2) {
  RunTest("YYOONNSSEEII", "YONSEI");
}
