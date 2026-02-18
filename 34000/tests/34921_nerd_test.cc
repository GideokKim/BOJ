#include "34000/src/34921_nerd.h"

#include "test_headers/test_helper.h"

class NerdTest : public IOTestFixture<Nerd> {};

TEST_F(NerdTest, SampleCase) { RunTest("16 16", "60"); }

TEST_F(NerdTest, SampleCase2) { RunTest("31 0", "0"); }
