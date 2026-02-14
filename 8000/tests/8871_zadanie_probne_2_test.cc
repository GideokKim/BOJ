#include "8000/src/8871_zadanie_probne_2.h"

#include "test_headers/test_helper.h"

class ZadanieProbne2Test : public IOTestFixture<ZadanieProbne2> {};

TEST_F(ZadanieProbne2Test, SimpleCase) { RunTest("5", "12 18"); }
