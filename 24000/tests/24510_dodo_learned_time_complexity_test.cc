#include "24000/src/24510_dodo_learned_time_complexity.h"

#include "test_headers/test_helper.h"

class DodoLearnedTimeComplexityTest
    : public IOTestFixture<DodoLearnedTimeComplexity> {};

TEST_F(DodoLearnedTimeComplexityTest, SampleCase) {
  RunTest("3\nfor\nforwhileforfor\nforwhileannsds", "4");
}

TEST_F(DodoLearnedTimeComplexityTest, SampleCase2) {
  RunTest("2\nasdsdasds\ndsdsdss", "0");
}
