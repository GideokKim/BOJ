#ifndef BOJ_2000_SRC_2501_DIVISORS_H_
#define BOJ_2000_SRC_2501_DIVISORS_H_

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

class Divisors {
 public:
  void SetInputs() { std::cin >> n >> k; }

  void Calculate() {
    std::vector<int> divisors;
    int sqrt_n = static_cast<int>(std::sqrt(n));

    for (int i = 1; i <= sqrt_n; i++) {
      if (n % i == 0) {
        divisors.push_back(i);
        if (i != n / i) {
          divisors.push_back(n / i);
        }
      }
    }

    std::sort(divisors.begin(), divisors.end());

    if (divisors.size() < static_cast<size_t>(k)) {
      result = 0;
    } else {
      result = divisors[k - 1];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int n, k;
  int result;
};

#ifdef BOJ_SUBMIT
#include <iostream>

int main() {
  Divisors divisors;
  divisors.SetInputs();
  divisors.Calculate();
  divisors.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2501_DIVISORS_H_
