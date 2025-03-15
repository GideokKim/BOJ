#include "1000/src/1543_document_search.h"

#include "test_headers/test_helper.h"

class DocumentSearchTest : public IOTestFixture<DocumentSearch> {};

TEST_F(DocumentSearchTest, SampleCase) { RunTest("ababababa\naba", "2"); }

TEST_F(DocumentSearchTest, SampleCase2) { RunTest("a a a a a\na a", "2"); }

TEST_F(DocumentSearchTest, SampleCase3) { RunTest("ababababa\nababa", "1"); }

TEST_F(DocumentSearchTest, SampleCase4) { RunTest("aaaaaaa\naa", "3"); }
