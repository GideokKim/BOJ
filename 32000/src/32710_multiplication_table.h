#ifndef BOJ_32000_SRC_32710_MULTIPLICATION_TABLE_H_
#define BOJ_32000_SRC_32710_MULTIPLICATION_TABLE_H_

#include <iostream>

class MultiplicationTable {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 1;
    if (n < 10) {
      return;
    }

    for (size_t i = 2; i < 10; ++i) {
      for (size_t j = 1; j < 10; ++j) {
        if (i * j == n) {
          return;
        }
      }
    }

    result = 0;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  MultiplicationTable multiplicationTable;
  multiplicationTable.SetInputs();
  multiplicationTable.Calculate();
  multiplicationTable.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32710_MULTIPLICATION_TABLE_H_
