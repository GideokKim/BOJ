#include "3000/src/3041_n_puzzle.h"

#include "test_headers/test_helper.h"

class NpuzzleTest : public IOTestFixture<Npuzzle> {};

TEST_F(NpuzzleTest, SampleCase) { RunTest("ABCD\nEFGH\nIJKL\nM.NO", "2"); }

TEST_F(NpuzzleTest, SampleCase2) { RunTest(".BCD\nEAGH\nIJFL\nMNOK", "6"); }
