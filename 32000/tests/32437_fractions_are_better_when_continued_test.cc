#include "32000/src/32437_fractions_are_better_when_continued.h"

#include "test_headers/test_helper.h"

class FractionsAreBetterWhenContinuedTest
    : public IOTestFixture<FractionsAreBetterWhenContinued> {};

TEST_F(FractionsAreBetterWhenContinuedTest, SimpleCase) { RunTest("2", "2"); }

TEST_F(FractionsAreBetterWhenContinuedTest, SimpleCase2) {
  RunTest("10", "89");
}
