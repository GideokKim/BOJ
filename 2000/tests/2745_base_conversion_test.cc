#include "2000/src/2745_base_conversion.h"

#include "test_headers/test_helper.h"

class BaseConversionTest : public IOTestFixture<BaseConversion> {};

TEST_F(BaseConversionTest, SampleCase) { RunTest("ZZZZZ 36", "60466175"); }

TEST_F(BaseConversionTest, SampleCase2) { RunTest("1234 10", "1234"); }

TEST_F(BaseConversionTest, Base16Case) { RunTest("FF 16", "255"); }
