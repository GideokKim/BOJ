#ifndef BOJ_11000_SRC_11880_ANT_H_
#define BOJ_11000_SRC_11880_ANT_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Ant {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;

    size_t a, b, c;
    for (size_t i = 0; i < t; ++i) {
      std::cin >> a >> b >> c;
      if (a > c) std::swap(a, c);
      if (b > c) std::swap(b, c);
      std::cout << (a + b) * (a + b) + c * c << '\n';
    }
  }

  void Calculate() {}

  void PrintResult() {}
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Ant ant;
  ant.SetInputs();
  ant.Calculate();
  ant.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11880_ANT_H_
