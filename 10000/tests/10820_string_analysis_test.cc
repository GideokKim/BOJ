#include "10000/src/10820_string_analysis.h"

#include "test_headers/test_helper.h"

class StringAnalysisTest : public IOTestFixture<StringAnalysis> {};

TEST_F(StringAnalysisTest, SimpleCase) {
  RunTest(
      "This is String\nSPACE    1    SPACE\n S a M p L e I n P u "
      "T     \n0L1A2S3T4L5I6N7E8\n\n",
      "10 2 0 2\n0 10 1 8\n5 6 0 16\n0 8 9 0\n");
}
