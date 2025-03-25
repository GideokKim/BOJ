#include "2000/src/2440_print_stars_3.h"

#include "test_headers/test_helper.h"

class PrintStars3Test : public IOTestFixture<PrintStars3> {};

TEST_F(PrintStars3Test, SampleCase) {
  RunTest("5", "*****\n****\n***\n**\n*\n");
}
