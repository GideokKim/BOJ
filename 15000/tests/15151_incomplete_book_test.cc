#include "15000/src/15151_incomplete_book.h"

#include "test_headers/test_helper.h"

class IncompleteBookTest : public IOTestFixture<IncompleteBook> {};

TEST_F(IncompleteBookTest, SampleCase) { RunTest("1 1", "1"); }

TEST_F(IncompleteBookTest, SampleCase2) { RunTest("1 2", "1"); }

TEST_F(IncompleteBookTest, SampleCase3) { RunTest("1 3", "2"); }

TEST_F(IncompleteBookTest, SampleCase4) { RunTest("117 1337", "3"); }
