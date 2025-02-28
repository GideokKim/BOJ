#include "33000/src/33178_micromasters.h"

#include "test_headers/test_helper.h"

class MicromastersTest : public IOTestFixture<Micromasters> {};

TEST_F(MicromastersTest, SimpleCase) {
  RunTest("5", "0");
}

TEST_F(MicromastersTest, SimpleCase2) {
  RunTest("18", "1");
}
