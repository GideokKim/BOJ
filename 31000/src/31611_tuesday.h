#ifndef BOJ_31000_SRC_31611_TUESDAY_H_
#define BOJ_31000_SRC_31611_TUESDAY_H_

#include <iostream>

class Tuesday {
 public:
  void SetInputs() { std::cin >> x; }

  void Calculate() {
    if (x % 7 == 2) {
      result = 1;
    } else {
      result = 0;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t x;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Tuesday tuesday;
  tuesday.SetInputs();
  tuesday.Calculate();
  tuesday.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31611_TUESDAY_H_