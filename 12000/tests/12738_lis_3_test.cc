#include "12000/src/12738_lis_3.h"

#include "test_headers/test_helper.h"

class Lis3Test : public IOTestFixture<LIS3> {};

TEST_F(Lis3Test, SimpleCase) { RunTest("6\n10 20 10 30 20 50", "4"); }
