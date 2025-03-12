#include "10000/src/10480_oddities.h"

#include "test_headers/test_helper.h"

class OdditiesTest : public IOTestFixture<Oddities> {};

TEST_F(OdditiesTest, SimpleCase) {
  RunTest("3\n10\n9\n-5", "10 is even\n9 is odd\n-5 is odd\n");
}
