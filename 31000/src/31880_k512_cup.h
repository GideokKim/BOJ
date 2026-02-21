#ifndef BOJ_31000_SRC_31880_k512_cup_H_
#define BOJ_31000_SRC_31880_k512_cup_H_

#include <algorithm>
#include <iostream>
#include <vector>

class k512_cup {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    a.resize(n);
    b.resize(m);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> a[i];
    }

    for (size_t i = 0; i < m; ++i) {
      std::cin >> b[i];
    }
  }

  void Calculate() {
    result = 0;

    for (size_t i = 0; i < n; ++i) {
      result += a[i];
    }

    for (size_t i = 0; i < m; ++i) {
      if (b[i] == 0) {
        continue;
      }
      result *= b[i];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<size_t> a;
  std::vector<size_t> b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  k512_cup k512_cup;
  k512_cup.SetInputs();
  k512_cup.Calculate();
  k512_cup.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31880_k512_cup_H_
