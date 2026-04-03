#include "33000/src/33810_scicomlove_2025.h"

#include "test_headers/test_helper.h"

class Scicomlove2025Test : public IOTestFixture<Scicomlove2025> {};

TEST_F(Scicomlove2025Test, SampleCase) { RunTest("SciComHate", "3"); }

TEST_F(Scicomlove2025Test, SampleCase2) { RunTest("sCIcOMlOVE", "10"); }

TEST_F(Scicomlove2025Test, SampleCase3) { RunTest("oooooooooo", "8"); }
