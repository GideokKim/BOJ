#include "1000/src/1365_twisted_line.h"

#include "test_headers/test_helper.h"

class TwistedLineTest : public IOTestFixture<TwistedLine> {};

TEST_F(TwistedLineTest, SampleCase) { RunTest("4\n2 3 4 1", "1"); }
