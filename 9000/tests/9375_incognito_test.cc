#include "9000/src/9375_incognito.h"

#include "test_headers/test_helper.h"

class IncognitoTest : public IOTestFixture<Incognito> {};

TEST_F(IncognitoTest, SampleCase) {
  RunTest(
      "2\n3\nhat headgear\n"
      "sunglasses eyewear\n"
      "turban headgear\n"
      "3\nmask face\n"
      "sunglasses face\n"
      "makeup face",
      "5\n3\n");
}
