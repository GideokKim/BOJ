#include "20000/src/20494_sushi.h"

#include "test_headers/test_helper.h"

class SushiTest : public IOTestFixture<Sushi> {};

TEST_F(SushiTest, SimpleCase) { RunTest("2\nABCDE\nFGH", "8"); }

TEST_F(SushiTest, SimpleCase2) { RunTest("1\nABCDE", "5"); }
