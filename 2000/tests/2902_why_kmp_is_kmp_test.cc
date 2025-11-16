#include "2000/src/2902_why_kmp_is_kmp.h"

#include "test_headers/test_helper.h"

class WhyKmpIsKmpTest : public IOTestFixture<WhyKmpIsKmp> {};

TEST_F(WhyKmpIsKmpTest, SampleCase) { RunTest("Knuth-Morris-Pratt", "KMP"); }

TEST_F(WhyKmpIsKmpTest, SampleCase2) { RunTest("Mirko-Slavko", "MS"); }

TEST_F(WhyKmpIsKmpTest, SampleCase3) { RunTest("Pasko-Patak", "PP"); }
