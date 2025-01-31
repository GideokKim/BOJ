#ifndef BOJ_9000_SRC_9613_GCD_SUM_H_
#define BOJ_9000_SRC_9613_GCD_SUM_H_

#include <algorithm>
#include <iostream>
#include <vector>

class GcdSum {
 public:
  void SetInputs() { std::cin >> t; }

  void Calculate() {
    results.resize(t, 0);

    size_t number_of_targets = 0;
    for (size_t i = 0; i < t; i++) {
      std::vector<long long> numbers;
      std::cin >> number_of_targets;
      numbers.resize(number_of_targets, 0);
      for (size_t j = 0; j < number_of_targets; j++) {
        std::cin >> numbers[j];
      }

      long long sum_of_gcd = 0;
      for (size_t j = 0; j < number_of_targets; j++) {
        for (size_t k = j + 1; k < number_of_targets; k++) {
          long long gcd = numbers[j];
          long long b = numbers[k];
          if (gcd < b) {
            std::swap(gcd, b);
          }
          while (b != 0) {
            long long temp = gcd % b;
            gcd = b;
            b = temp;
          }
          sum_of_gcd += gcd;
        }
      }
      results[i] = sum_of_gcd;
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < t; i++) {
      std::cout << results[i] << std::endl;
    }
  }

 private:
  size_t t;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  GcdSum gcd_sum;
  gcd_sum.SetInputs();
  gcd_sum.Calculate();
  gcd_sum.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9613_GCD_SUM_H_
