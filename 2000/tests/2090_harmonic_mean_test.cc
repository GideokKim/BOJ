#include "2000/src/2090_harmonic_mean.h"

#include "test_headers/test_helper.h"

class HarmonicMeanTest : public IOTestFixture<HarmonicMean> {};

TEST_F(HarmonicMeanTest, SampleCase) { RunTest("3\n4 1 2", "4/7"); }
