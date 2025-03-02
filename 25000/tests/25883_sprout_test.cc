#include "25000/src/25883_sprout.h"

#include "test_headers/test_helper.h"

class SproutTest : public IOTestFixture<Sprout> {};

TEST_F(SproutTest, SimpleCase) {
  RunTest("",
          "         ,r'\"7\n"
          "r`-_   ,'  ,/\n"
          " \\. \". L_r'\n"
          "   `~\\\/\n"
          "      |\n"
          "      |\n");
}
