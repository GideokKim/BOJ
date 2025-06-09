#ifndef BOJ_31000_SRC_31867_ODD_EVEN_H_
#define BOJ_31000_SRC_31867_ODD_EVEN_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class OddEven {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> input;
  }

  void Calculate() {
    result = 0;
    for (auto target : input) {
      if ((target - '0') % 2) {
        --result;
      } else {
        ++result;
      }
    }
    if (result < 0) {
      result = 1;
    } else if (result > 0) {
      result = 0;
    } else {
      result = -1;
    }
  }
  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  OddEven odd_even;
  odd_even.SetInputs();
  odd_even.Calculate();
  odd_even.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31867_ODD_EVEN_H_
