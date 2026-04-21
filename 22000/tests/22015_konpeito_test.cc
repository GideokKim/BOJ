#include "22000/src/22015_konpeito.h"

#include "test_headers/test_helper.h"

class KonpeitoTest : public IOTestFixture<Konpeito> {};

TEST_F(KonpeitoTest, SampleCase) { RunTest("4 6 9", "8"); }

TEST_F(KonpeitoTest, SampleCase2) { RunTest("35 35 35", "0"); }
