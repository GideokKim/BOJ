#include "2000/src/2522_print_stars_12.h"

#include "test_headers/test_helper.h"

class PrintStars12Test : public IOTestFixture<PrintStars12> {};

TEST_F(PrintStars12Test, SampleCase) {
  RunTest("3", "  *\n **\n***\n **\n  *\n");
}
