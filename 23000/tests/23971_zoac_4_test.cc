#include "23000/src/23971_zoac_4.h"

#include "test_headers/test_helper.h"

class Zoac4Test : public IOTestFixture<Zoac4> {};

TEST_F(Zoac4Test, SimpleCase) { RunTest("5 4 1 1", "6"); }
