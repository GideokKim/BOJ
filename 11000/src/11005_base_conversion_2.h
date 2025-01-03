#ifndef BOJ_11000_SRC_11005_BASE_CONVERSION_2_H_
#define BOJ_11000_SRC_11005_BASE_CONVERSION_2_H_

#include <iostream>
#include <string>

class BaseConversion2 {
 public:
  void SetInputs() { std::cin >> N >> B; };

  void Convert() {
    while (N > 0) {
      char ch = N % B;
      if (ch >= 10) {
        ch = 'A' + (ch - 10);
      } else {
        ch = '0' + ch;
      }
      result = ch + result;
      N /= B;
    }
  }

  std::string GetResult() { return result; };

 private:
  int N;
  int B;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  BaseConversion2 base_conversion_2;
  base_conversion_2.SetInputs();
  base_conversion_2.Convert();
  std::cout << base_conversion_2.GetResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11005_BASE_CONVERSION_2_H_
