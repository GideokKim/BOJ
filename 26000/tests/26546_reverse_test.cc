#include "26000/src/26546_reverse.h"

#include "test_headers/test_helper.h"

class ReverseTest : public IOTestFixture<Reverse> {};

TEST_F(ReverseTest, SimpleCase) {
  RunTest("3\nCOMPUTER 1 3\nSCIENCE 3 7\nRULES 3 4", "CPUTER\nSCI\nRULS\n");
}
