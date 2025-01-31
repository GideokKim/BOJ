#include "31000/src/31403_a_plus_b_minus_c.h"

#include "test_headers/test_helper.h"

class APlusBMinusCTest : public IOTestFixture<APlusBMinusC> {};

TEST_F(APlusBMinusCTest, SampleCase) { RunTest("3\n4\n5", "2\n29"); }
