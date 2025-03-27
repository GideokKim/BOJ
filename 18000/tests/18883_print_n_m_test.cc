#include "18000/src/18883_print_n_m.h"

#include "test_headers/test_helper.h"

class PrintNMTest : public IOTestFixture<PrintNM> {};

TEST_F(PrintNMTest, SimpleCase) {
  RunTest("3 4", "1 2 3 4\n5 6 7 8\n9 10 11 12\n");
}
