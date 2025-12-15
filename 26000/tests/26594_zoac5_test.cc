#include "26000/src/26594_zoac5.h"

#include "test_headers/test_helper.h"

class Zoac5Test : public IOTestFixture<Zoac5> {};

TEST_F(Zoac5Test, SimpleCase) { RunTest("ZZZOOOAAACCC", "3"); }
