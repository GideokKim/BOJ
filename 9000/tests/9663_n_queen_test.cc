#include "9000/src/9663_n_queen.h"

#include "test_headers/test_helper.h"

class NQueenTest : public IOTestFixture<NQueen> {};

TEST_F(NQueenTest, SampleCase) { RunTest("8", "92"); }
