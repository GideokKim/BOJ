#include "33000/src/33689_cpdu.h"

#include "test_headers/test_helper.h"

class CpduTest : public IOTestFixture<Cpdu> {};

TEST_F(CpduTest, SampleCase) {
  RunTest(
      "6\n"
      "UDPC\n"
      "CPDU\n"
      "YUNEE\n"
      "DALGOO\n"
      "PONIX\n"
      "CONTEST",
      "2");
}
