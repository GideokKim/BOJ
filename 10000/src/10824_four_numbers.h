#ifndef BOJ_10000_SRC_10824_FOUR_NUMBERS_H_
#define BOJ_10000_SRC_10824_FOUR_NUMBERS_H_

#include <iostream>
#include <string>

class FourNumbers {
 public:
  void SetInputs() { std::cin >> a >> b >> c >> d; }

  void Calculate() {
    long long ab = std::stoll(a + b);
    long long cd = std::stoll(c + d);
    result = ab + cd;
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string a, b, c, d;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  FourNumbers four_numbers;
  four_numbers.SetInputs();
  four_numbers.Calculate();
  four_numbers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10824_FOUR_NUMBERS_H_
