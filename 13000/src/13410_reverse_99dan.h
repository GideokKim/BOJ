#ifndef BOJ_13000_SRC_13410_REVERSE_99DAN_H_
#define BOJ_13000_SRC_13410_REVERSE_99DAN_H_

#include <algorithm>
#include <iostream>
#include <string>

class Reverse99Dan {
 public:
  void SetInputs() { std::cin >> n >> k; }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i <= k; ++i) {
      std::string s = std::to_string(i * n);
      std::reverse(s.begin(), s.end());
      result = result > std::stoull(s) ? result : std::stoull(s);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Reverse99Dan reverse_99dan;
  reverse_99dan.SetInputs();
  reverse_99dan.Calculate();
  reverse_99dan.PrintResult();

  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13410_REVERSE_99DAN_H_
