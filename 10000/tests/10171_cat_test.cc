#include "10000/src/10171_cat.h"

#include "test_headers/test_helper.h"

class CatTest : public IOTestFixture<Cat> {};

TEST_F(CatTest, SimpleCase) {
  RunTest("", "\\    /\\\n )  ( ')\n(  /  )\n \\(__)|\n");
}
