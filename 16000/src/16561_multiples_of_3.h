#ifndef BOJ_16000_SRC_16561_MULTIPLES_OF_3_H_
#define BOJ_16000_SRC_16561_MULTIPLES_OF_3_H_

#include <iostream>

class MultiplesOf3 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 0;
    if (n % 3) {
      return;
    }

    result = 1;
    if (n == 9) {
      return;
    }

    size_t count = n / 3 - 1;
    result = count * (count - 1) / 2;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  MultiplesOf3 multiples_of_3;
  multiples_of_3.SetInputs();
  multiples_of_3.Calculate();
  multiples_of_3.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_16000_SRC_16561_MULTIPLES_OF_3_H_
