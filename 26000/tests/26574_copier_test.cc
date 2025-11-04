#include "26000/src/26574_copier.h"

#include "test_headers/test_helper.h"

class CopierTest : public IOTestFixture<Copier> {};

TEST_F(CopierTest, SimpleCase) { RunTest("3\n7\n3\n10", "7 7\n3 3\n10 10\n"); }
