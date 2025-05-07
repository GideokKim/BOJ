#include "12000/src/12015_lis_2.h"

#include "test_headers/test_helper.h"

class Lis2Test : public IOTestFixture<Lis2> {};

TEST_F(Lis2Test, SimpleCase) { RunTest("6\n10 20 10 30 20 50", "4"); }
