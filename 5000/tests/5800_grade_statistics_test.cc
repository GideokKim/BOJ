#include "5000/src/5800_grade_statistics.h"

#include "test_headers/test_helper.h"

class GradeStatisticsTest : public IOTestFixture<GradeStatistics> {};

TEST_F(GradeStatisticsTest, SampleCase) {
  RunTest("2\n5 30 25 76 23 78\n6 25 50 70 99 70 90",
          "Class 1\nMax 78, Min 23, Largest gap 46\nClass 2\nMax 99, Min 25, "
          "Largest gap 25\n");
}
