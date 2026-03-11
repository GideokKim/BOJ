#include "31000/src/31495_what_is_this_code.h"

#include "test_headers/test_helper.h"

class WhatIsThisCodeTest : public IOTestFixture<WhatIsThisCode> {};

TEST_F(WhatIsThisCodeTest, SampleCase) { RunTest("\"Hello World", "CE"); }

TEST_F(WhatIsThisCodeTest, SampleCase2) {
  RunTest("\"Hello World\"", "Hello World");
}
