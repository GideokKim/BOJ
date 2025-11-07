#include "23000/src/23037_only_5.h"

#include "test_headers/test_helper.h"

class Only5Test : public IOTestFixture<Only5> {};

TEST_F(Only5Test, SampleCase) { RunTest("12345", "4425"); }

TEST_F(Only5Test, SampleCase2) { RunTest("54748", "54748"); }

TEST_F(Only5Test, SampleCase3) { RunTest("92727", "92727"); }

TEST_F(Only5Test, SampleCase4) { RunTest("93084", "93084"); }