#include "16000/src/16497_book_borrowing_request.h"

#include "test_headers/test_helper.h"

class BookBorrowingRequestTest : public IOTestFixture<BookBorrowingRequest> {};

TEST_F(BookBorrowingRequestTest, SampleCase) {
  RunTest("3\n1 2\n3 6\n5 8\n1", "0");
}

TEST_F(BookBorrowingRequestTest, SampleCase2) {
  RunTest("3\n1 2\n3 4\n5 8\n1", "1");
}

TEST_F(BookBorrowingRequestTest, SampleCase3) {
  RunTest("3\n1 2\n3 6\n5 8\n2", "1");
}
