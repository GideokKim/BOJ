#include "15000/src/15312_name_chemistry.h"

#include "test_headers/test_helper.h"

class NameChemistryTest : public IOTestFixture<NameChemistry> {};

TEST_F(NameChemistryTest, SampleCase) { RunTest("CJM\nHER", "99"); }
