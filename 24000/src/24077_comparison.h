#ifndef BOJ_24000_SRC_24077_COMPARISON_H_
#define BOJ_24000_SRC_24077_COMPARISON_H_

#include <iostream>
#include <vector>

class Comparison {
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
    for (auto target : a) {
      for (auto check : b) {
        if (target <= check) {
          ++result;
        }
      }
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  size_t n, m;
  std::vector<int> a;
  std::vector<int> b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Comparison comparison;
  comparison.SetInputs();
  comparison.Calculate();
  comparison.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24077_COMPARISON_H_
