#include "23000/src/23048_coloring_natural_numbers.h"

#include "test_headers/test_helper.h"

class ColoringNaturalNumbersTest
    : public IOTestFixture<ColoringNaturalNumbers> {};

TEST_F(ColoringNaturalNumbersTest, SampleCase) {
  RunTest("5", "4\n1 2 3 2 4 ");
}
