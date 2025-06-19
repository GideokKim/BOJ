#include "31000/src/31668_special_eggplant.h"

#include "test_headers/test_helper.h"

class SpecialEggplantTest : public IOTestFixture<SpecialEggplant> {};

TEST_F(SpecialEggplantTest, SampleCase) { RunTest("10\n200\n5", "100"); }
