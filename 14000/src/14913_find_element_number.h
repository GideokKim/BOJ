#ifndef BOJ_14000_SRC_14913_FIND_ELEMENT_NUMBER_H_
#define BOJ_14000_SRC_14913_FIND_ELEMENT_NUMBER_H_

#include <iostream>
#include <string>

class FindElementNumber {
 public:
  void SetInputs() { std::cin >> a >> d >> k; }

  void Calculate() {
    long long num = a;
    size_t count = 1;
    result = "X";

    while (-1000000 <= num && num <= 1000000) {
      if (num == k) {
        result = std::to_string(count);
        break;
      }
      num += d;
      ++count;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, d, k;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  FindElementNumber find_element_number;
  find_element_number.SetInputs();
  find_element_number.Calculate();
  find_element_number.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14913_FIND_ELEMENT_NUMBER_H_
