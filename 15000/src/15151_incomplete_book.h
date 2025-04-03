#ifndef BOJ_15000_SRC_15151_INCOMPLETE_BOOK_H_
#define BOJ_15000_SRC_15151_INCOMPLETE_BOOK_H_

#include <iostream>

class IncompleteBook {
 public:
  void SetInputs() { std::cin >> k >> d; }

  void Calculate() {
    result = 0;
    while (k <= d) {
      result++;
      d -= k;
      k <<= 1;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t k, d;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  IncompleteBook incomplete_book;
  incomplete_book.SetInputs();
  incomplete_book.Calculate();
  incomplete_book.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15151_INCOMPLETE_BOOK_H_
