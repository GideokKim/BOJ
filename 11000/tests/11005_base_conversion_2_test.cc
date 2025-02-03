#include "11000/src/11005_base_conversion_2.h"

#include "test_headers/test_helper.h"

class BaseConversion2Test : public IOTestFixture<BaseConversion2> {};

TEST_F(BaseConversion2Test, SampleCase) { RunTest("60466175 36", "ZZZZZ"); }

TEST_F(BaseConversion2Test, SampleCase2) { RunTest("35 2", "100011"); }
