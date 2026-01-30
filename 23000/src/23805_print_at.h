#ifndef BOJ_23000_SRC_23805_PRINT_AT_H_
#define BOJ_23000_SRC_23805_PRINT_AT_H_

#include <iostream>

class PrintAt {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@@@";
      }

      for (size_t j = 0; j < n; ++j) {
        std::cout << " ";
      }

      for (size_t j = 0; j < n; ++j) {
        std::cout << "@";
      }
      std::cout << "\n";
    }

    for (size_t k = 0; k < 3; ++k) {
      for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
          std::cout << "@";
        }

        for (size_t j = 0; j < n; ++j) {
          std::cout << " ";
        }

        for (size_t j = 0; j < n; ++j) {
          std::cout << "@";
        }

        for (size_t j = 0; j < n; ++j) {
          std::cout << " ";
        }

        for (size_t j = 0; j < n; ++j) {
          std::cout << "@";
        }
        std::cout << "\n";
      }
    }

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@";
      }

      for (size_t j = 0; j < n; ++j) {
        std::cout << " ";
      }

      for (size_t j = 0; j < n; ++j) {
        std::cout << "@@@";
      }
      std::cout << "\n";
    }
  }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintAt print_at;
  print_at.SetInputs();
  print_at.Calculate();
  print_at.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23805_PRINT_AT_H_
