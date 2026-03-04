#include "34000/src/34891_mt_preparation.h"

#include "test_headers/test_helper.h"

class MtPreparationTest : public IOTestFixture<MtPreparation> {};

TEST_F(MtPreparationTest, SampleCase) { RunTest("6 3", "2"); }
