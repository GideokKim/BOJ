#ifndef BOJ_1000_SRC_1735_FRACTIONAL_SUM_H_
#define BOJ_1000_SRC_1735_FRACTIONAL_SUM_H_

#include <algorithm>
#include <iostream>

class FractionalSum {
 public:
  void SetInputs() {
    std::cin >> a_numerator >> a_denominator >> b_numerator >> b_denominator;
  }

  void Calculate() {
    int gcd = a_numerator * b_denominator + b_numerator * a_denominator;
    int b = a_denominator * b_denominator;
    if (gcd < b) {
      std::swap(gcd, b);
    }

    while (b != 0) {
      int temp = gcd % b;
      gcd = b;
      b = temp;
    }

    result_numerator =
        (a_numerator * b_denominator + b_numerator * a_denominator) / gcd;
    result_denominator = a_denominator * b_denominator / gcd;
  }

  void PrintResult() {
    std::cout << result_numerator << " " << result_denominator;
  }

 private:
  int a_numerator, a_denominator;
  int b_numerator, b_denominator;
  int result_numerator, result_denominator;
};

#ifdef BOJ_SUBMIT
int main() {
  FractionalSum fractional_sum;
  fractional_sum.SetInputs();
  fractional_sum.Calculate();
  fractional_sum.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1735_FRACTIONAL_SUM_H_
