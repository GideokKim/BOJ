#include "34000/src/34346_diagonal.h"

#include "test_headers/test_helper.h"

class DiagonalTest : public IOTestFixture<Diagonal> {};

TEST_F(DiagonalTest, SampleCase) { RunTest("4", "2"); }
