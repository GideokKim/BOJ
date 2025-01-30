#include "31000/src/31606_fruit.h"

#include "test_headers/test_helper.h"

class FruitTest : public IOTestFixture<Fruit> {};

TEST_F(FruitTest, SampleCase) { RunTest("2\n4", "9"); }

TEST_F(FruitTest, SampleCase2) { RunTest("15\n30", "48"); }

TEST_F(FruitTest, SampleCase3) { RunTest("0\n0", "3"); }
