#include "11000/src/11568_scheme.h"

#include "test_headers/test_helper.h"

class SchemeTest : public IOTestFixture<Scheme> {};

TEST_F(SchemeTest, SampleCase) { RunTest("5\n8 9 1 2 10", "3"); }

TEST_F(SchemeTest, SampleCase2) { RunTest("8\n5 4 3 2 1 6 7 8", "4"); }
