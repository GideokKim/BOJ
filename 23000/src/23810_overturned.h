#ifndef BOJ_23000_SRC_23810_OVERTURNED_H_
#define BOJ_23000_SRC_23810_OVERTURNED_H_

#include <iostream>

class Overturned {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@@@@@";
      }
      std::cout << "\n";
    }

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@";
      }
      std::cout << "\n";
    }

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@@@@@";
      }
      std::cout << "\n";
    }

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@";
      }
      std::cout << "\n";
    }

    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < n; ++j) {
        std::cout << "@";
      }
      std::cout << "\n";
    }
  }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  Overturned overturned;
  overturned.SetInputs();
  overturned.Calculate();
  overturned.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23810_OVERTURNED_H_
