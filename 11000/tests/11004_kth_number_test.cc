#include "11000/src/11004_kth_number.h"

#include "test_headers/test_helper.h"

class KthNumberTest : public IOTestFixture<KthNumber> {};

TEST_F(KthNumberTest, SampleCase) { RunTest("5 2\n4 1 2 3 5", "2"); }
