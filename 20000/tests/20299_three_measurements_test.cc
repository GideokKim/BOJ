#include "20000/src/20299_three_measurements.h"

#include "test_headers/test_helper.h"

class ThreeMeasurementsTest : public IOTestFixture<ThreeMeasurements> {};

TEST_F(ThreeMeasurementsTest, SimpleCase) {
  RunTest(
      "5 5000 1600\n1621 1928 1809\n2300 2300 1499\n1805 1211 1699\n1600 1700 "
      "1800\n1792 1617 1830",
      "3\n1621 1928 1809 1600 1700 1800 1792 1617 1830 ");
}
