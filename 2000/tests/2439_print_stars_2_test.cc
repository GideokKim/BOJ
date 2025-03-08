#include "2000/src/2439_print_stars_2.h"

#include "test_headers/test_helper.h"

class PrintStars2Test : public IOTestFixture<PrintStars2> {};

TEST_F(PrintStars2Test, SampleCase) {
  RunTest("5", "    *\n   **\n  ***\n ****\n*****\n");
}

TEST_F(PrintStars2Test, SampleCase2) { RunTest("1", "*\n"); }
