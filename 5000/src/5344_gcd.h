#ifndef BOJ_5000_SRC_5344_GCD_H_
#define BOJ_5000_SRC_5344_GCD_H_

#include <iostream>
#include <numeric>
#include <vector>

class Gcd {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    int a, b;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> a >> b;
      results.push_back(std::gcd(a, b));
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  size_t n;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Gcd gcd;
  gcd.SetInputs();
  gcd.Calculate();
  gcd.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5344_GCD_H_
