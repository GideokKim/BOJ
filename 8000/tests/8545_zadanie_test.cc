#include "8000/src/8545_zadanie.h"

#include "test_headers/test_helper.h"

class ZadanieTest : public IOTestFixture<Zadanie> {};

TEST_F(ZadanieTest, SimpleCase) { RunTest("abc", "cba"); }
