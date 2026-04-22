#include "20000/src/20833_kuber.h"

#include "test_headers/test_helper.h"

class KuberTest : public IOTestFixture<Kuber> {};

TEST_F(KuberTest, SimpleCase) { RunTest("4", "100"); }

TEST_F(KuberTest, SimpleCase2) { RunTest("7", "784"); }
