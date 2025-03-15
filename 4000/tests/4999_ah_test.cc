#include "4000/src/4999_ah.h"

#include "test_headers/test_helper.h"

class AhTest : public IOTestFixture<Ah> {};

TEST_F(AhTest, SimpleCase) { RunTest("aaah\naaaaah", "no"); }

TEST_F(AhTest, SimpleCase2) { RunTest("aaah\nah", "go"); }
