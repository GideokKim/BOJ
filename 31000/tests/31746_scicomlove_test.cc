#include "31000/src/31746_scicomlove.h"

#include "test_headers/test_helper.h"

class SciComLoveTest : public IOTestFixture<SciComLove> {};

TEST_F(SciComLoveTest, SampleCase) { RunTest("1", "evoLmoCicS"); }

TEST_F(SciComLoveTest, SampleCase2) { RunTest("2", "SciComLove"); }
