#include "33000/src/33161_pencils_2.h"

#include "test_headers/test_helper.h"

class Pencils2Test : public IOTestFixture<Pencils2> {};

TEST_F(Pencils2Test, SampleCase) { RunTest("9", "1"); }

TEST_F(Pencils2Test, SampleCase2) { RunTest("10", "2"); }

TEST_F(Pencils2Test, SampleCase3) { RunTest("3", "0"); }

TEST_F(Pencils2Test, SampleCase4) { RunTest("100", "20"); }
