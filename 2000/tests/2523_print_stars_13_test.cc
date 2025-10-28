#include "2000/src/2523_print_stars_13.h"

#include "test_headers/test_helper.h"

class PrintStars13Test : public IOTestFixture<PrintStars13> {};

TEST_F(PrintStars13Test, SampleCase) { RunTest("3", "*\n**\n***\n**\n*\n"); }
