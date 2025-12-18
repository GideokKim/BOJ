#include "34000/src/34529_acquiring_sw_it_corn.h"

#include "test_headers/test_helper.h"

class AcquiringSwItCornTest : public IOTestFixture<AcquiringSwItCorn> {};

TEST_F(AcquiringSwItCornTest, SampleCase) {
  RunTest("100 1000 10000\n1000 500 200", "111000");
}

TEST_F(AcquiringSwItCornTest, SampleCase2) {
  RunTest("600 400 300\n1000 800 400", "18400");
}
