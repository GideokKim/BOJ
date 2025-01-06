#ifndef BOJ_27000_SRC_27331_TWO_DIGIT_NUMBER_H_
#define BOJ_27000_SRC_27331_TWO_DIGIT_NUMBER_H_

#include <iostream>

class TwoDigitNumber {
 public:
  void SetInputs() { std::cin >> A >> B; }

  int Calculate() { return A * 10 + B; }

 private:
  int A;
  int B;
};

#ifdef BOJ_SUBMIT
int main() {
  TwoDigitNumber two_digit_number;
  two_digit_number.SetInputs();
  std::cout << two_digit_number.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27331_TWO_DIGIT_NUMBER_H_
