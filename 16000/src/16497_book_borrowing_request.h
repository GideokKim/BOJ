#ifndef BOJ_16000_SRC_16497_BOOK_BORROWING_REQUEST_H_
#define BOJ_16000_SRC_16497_BOOK_BORROWING_REQUEST_H_

#include <iostream>
#include <vector>

class BookBorrowingRequest {
 public:
  void SetInputs() {
    std::cin >> n;
    start_date.resize(n);
    end_date.resize(n);
    book_borrowing_request.resize(32, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> start_date[i] >> end_date[i];
    }
    std::cin >> k;
  }

  void Calculate() {
    result = 1;
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = start_date[i]; j < end_date[i]; ++j) {
        ++book_borrowing_request[j];
      }
    }
    for (size_t i = 1; i < 32; ++i) {
      if (book_borrowing_request[i] > k) {
        result = 0;
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  int result;
  std::vector<size_t> start_date, end_date;
  std::vector<size_t> book_borrowing_request;
};

#ifdef BOJ_SUBMIT
int main() {
  BookBorrowingRequest book_borrowing_request;
  book_borrowing_request.SetInputs();
  book_borrowing_request.Calculate();
  book_borrowing_request.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_16000_SRC_16497_BOOK_BORROWING_REQUEST_H_
