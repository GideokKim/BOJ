#include "2000/src/2441_print_stars_4.h"

#include "test_headers/test_helper.h"

class PrintStars4Test : public IOTestFixture<PrintStars4> {};

TEST_F(PrintStars4Test, SampleCase) {
  RunTest("5", "*****\n ****\n  ***\n   **\n    *\n");
}
