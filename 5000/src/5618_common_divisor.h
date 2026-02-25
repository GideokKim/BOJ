#ifndef BOJ_5000_SRC_5618_COMMON_DIVISOR_H_
#define BOJ_5000_SRC_5618_COMMON_DIVISOR_H_

#include <iostream>
#include <numeric>
#include <vector>

class CommonDivisor {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    divisors.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> divisors[i];
    }
  }

  void Calculate() {
    size_t gcd = std::gcd(divisors[0], divisors[1]);
    for (size_t i = 2; i < divisors.size(); ++i) {
      gcd = std::gcd(gcd, divisors[i]);
    }

    for (size_t i = 1; i <= gcd; ++i) {
      if (gcd % i == 0) {
        results.push_back(i);
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<size_t> divisors;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CommonDivisor common_divisor;
  common_divisor.SetInputs();
  common_divisor.Calculate();
  common_divisor.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5618_COMMON_DIVISOR_H_
