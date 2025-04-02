#include "11000/src/11719_print_as_it_is_2.h"

#include "test_headers/test_helper.h"

class PrintAsItIs2Test : public IOTestFixture<PrintAsItIs2> {};

TEST_F(PrintAsItIs2Test, SampleCase) {
  RunTest(
      "    Hello\n"
      "\n"
      "Baekjoon     \n"
      "   Online Judge    ",
      "    Hello\n"
      "\n"
      "Baekjoon     \n"
      "   Online Judge    \n");
}
