#ifndef BOJ_27000_SRC_27324_SAME_NUMBERS_H_
#define BOJ_27000_SRC_27324_SAME_NUMBERS_H_

#include <iostream>

class SameNumbers {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n % 10 == n / 10 ? 1 : 0; }

  void PrintResult() const { std::cout << result; }

 private:
  int n;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  SameNumbers same_numbers;
  same_numbers.SetInputs();
  same_numbers.Calculate();
  same_numbers.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27324_SAME_NUMBERS_H_
