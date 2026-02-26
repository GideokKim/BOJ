#include "1000/src/1681_line_up.h"

#include "test_headers/test_helper.h"

class LineUpTest : public IOTestFixture<LineUp> {};

TEST_F(LineUpTest, SampleCase) { RunTest("10 1", "22"); }
