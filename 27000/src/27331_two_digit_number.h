#ifndef BOJ_27000_SRC_27331_TWO_DIGIT_NUMBER_H_
#define BOJ_27000_SRC_27331_TWO_DIGIT_NUMBER_H_

#include <iostream>

class TwoDigitNumber {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = a * 10 + b; }

  void PrintResult() const { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  TwoDigitNumber two_digit_number;
  two_digit_number.SetInputs();
  two_digit_number.Calculate();
  two_digit_number.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27331_TWO_DIGIT_NUMBER_H_
