#include "15000/src/15963_casio.h"

#include "test_headers/test_helper.h"

class CasioTest : public IOTestFixture<Casio> {};

TEST_F(CasioTest, SampleCase) { RunTest("1 1.", "1"); }

TEST_F(CasioTest, SampleCase2) { RunTest("1 0", "0"); }
