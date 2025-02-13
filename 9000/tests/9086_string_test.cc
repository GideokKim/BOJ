#include "9000/src/9086_string.h"

#include "test_headers/test_helper.h"

class StringTest : public IOTestFixture<String> {};

TEST_F(StringTest, SampleCase) {
  RunTest("3\nACDKJFOWIEGHE\nO\nAB\n", "AE\nOO\nAB\n");
}