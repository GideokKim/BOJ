#ifndef BOJ_17000_SRC_17427_SUM_OF_DIVISORS_2_H_
#define BOJ_17000_SRC_17427_SUM_OF_DIVISORS_2_H_

#include <iostream>

class SumOfDivisors2 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    sum = 0;
    for (long long i = 1; i <= n; ++i) {
      sum += i * (n / i);
    }
  }

  void PrintResult() { std::cout << sum; }

 private:
  long long n;
  long long sum;
};

#ifdef BOJ_SUBMIT
int main() {
  SumOfDivisors2 sum_of_divisors2;
  sum_of_divisors2.SetInputs();
  sum_of_divisors2.Calculate();
  sum_of_divisors2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17427_SUM_OF_DIVISORS_2_H_
