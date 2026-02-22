#include "32000/src/32978_galric.h"

#include "test_headers/test_helper.h"

class GalricTest : public IOTestFixture<Galric> {};

TEST_F(GalricTest, SimpleCase) {
  RunTest("5\nFlour Garlic Seashell Oil Butter\nSeashell Oil Butter Flour",
          "Garlic");
}
