#ifndef BOJ_11000_SRC_11005_BASE_CONVERSION_2_H_
#define BOJ_11000_SRC_11005_BASE_CONVERSION_2_H_

#include <iostream>
#include <string>

class BaseConversion2 {
 public:
  void SetInputs() { std::cin >> n >> b; };

  void Calculate() {
    while (n > 0) {
      char ch = n % b;
      if (ch >= 10) {
        ch = 'A' + (ch - 10);
      } else {
        ch = '0' + ch;
      }
      result = ch + result;
      n /= b;
    }
  }

  void PrintResult() { std::cout << result; };

 private:
  int n, b;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  BaseConversion2 base_conversion_2;
  base_conversion_2.SetInputs();
  base_conversion_2.Calculate();
  base_conversion_2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11005_BASE_CONVERSION_2_H_
