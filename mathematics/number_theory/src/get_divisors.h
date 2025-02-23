#ifndef BOJ_MATHEMATICS_NUMBER_THEORY_SRC_GET_DIVISORS_H_
#define BOJ_MATHEMATICS_NUMBER_THEORY_SRC_GET_DIVISORS_H_

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

namespace boj {
namespace mathematics {
namespace number_theory {

class GetDivisors {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    long long sqrt_n = static_cast<long long>(std::sqrt(n));
    for (long long i = 1; i <= sqrt_n; i++) {
      if (n % i == 0) {
        divisors.push_back(i);
        if (i != n / i) {
          divisors.push_back(n / i);
        }
      }
    }
    std::sort(divisors.begin(), divisors.end());
  }

  void PrintResult() {
    for (int i = 0; i < divisors.size(); i++) {
      std::cout << divisors[i] << " ";
    }
  }

 private:
  long long n;
  std::vector<long long> divisors;
};

}  // namespace number_theory
}  // namespace mathematics
}  // namespace boj

#endif  // BOJ_MATHEMATICS_NUMBER_THEORY_SRC_GET_DIVISORS_H_
