#include "4000/src/4562_no_brainer.h"

#include "test_headers/test_helper.h"

class NoBrainerTest : public IOTestFixture<NoBrainer> {};

TEST_F(NoBrainerTest, SampleCase) {
  RunTest("3\n4 5\n3 3\n4 3", "NO BRAINS\nMMM BRAINS\nMMM BRAINS\n");
}
