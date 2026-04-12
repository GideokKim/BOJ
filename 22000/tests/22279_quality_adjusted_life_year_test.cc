#include "22000/src/22279_quality_adjusted_life_year.h"

#include "test_headers/test_helper.h"

class QualityAdjustedLifeYearTest
    : public IOTestFixture<QualityAdjustedLifeYear> {};

TEST_F(QualityAdjustedLifeYearTest, SampleCase) {
  RunTest("5\n1.0 12.0\n0.7 5.2\n0.9 10.7\n0.5 20.4\n0.2 30.0", "41.470");
}
