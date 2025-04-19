#include "27000/src/27110_giving_special_meals.h"

#include "test_headers/test_helper.h"

class GivingSpecialMealsTest : public IOTestFixture<GivingSpecialMeals> {};

TEST_F(GivingSpecialMealsTest, SampleCase) { RunTest("5\n1 7 6", "11"); }

TEST_F(GivingSpecialMealsTest, SampleCase2) { RunTest("10\n9 8 7", "24"); }

TEST_F(GivingSpecialMealsTest, SampleCase3) { RunTest("5\n5 5 5", "15"); }

TEST_F(GivingSpecialMealsTest, SampleCase4) {
  RunTest("10\n100 200 300", "30");
}
