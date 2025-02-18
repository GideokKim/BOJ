#include "11000/src/11718_print_as_it_is.h"

#include "test_headers/test_helper.h"

class PrintAsItIsTest : public IOTestFixture<PrintAsItIs> {};

TEST_F(PrintAsItIsTest, SampleCase) {
  RunTest("Hello\nBaekjoon\nOnline Judge\n", "Hello\nBaekjoon\nOnline Judge\n");
}
