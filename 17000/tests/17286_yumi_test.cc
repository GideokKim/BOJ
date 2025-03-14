#include "17000/src/17286_yumi.h"

#include "test_headers/test_helper.h"

class YumiTest : public IOTestFixture<Yumi> {};

TEST_F(YumiTest, SimpleCase) { RunTest("0 0\n1 0\n2 0\n4 0", "4"); }
