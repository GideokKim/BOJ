#ifndef BOJ_24000_SRC_24273_GREEN_BIG_TOP_H_
#define BOJ_24000_SRC_24273_GREEN_BIG_TOP_H_

#include <iostream>

class GreenBigTop {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 1;
    for (size_t i = 0; i < n; ++i) {
      result *= 2;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  GreenBigTop green_big_top;
  green_big_top.SetInputs();
  green_big_top.Calculate();
  green_big_top.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24273_GREEN_BIG_TOP_H_
