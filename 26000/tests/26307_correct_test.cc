#include "26000/src/26307_correct.h"

#include "test_headers/test_helper.h"

class CorrectTest : public IOTestFixture<Correct> {};

TEST_F(CorrectTest, SimpleCase) { RunTest("9 0", "0"); }

TEST_F(CorrectTest, SimpleCase2) { RunTest("11 59", "179"); }
