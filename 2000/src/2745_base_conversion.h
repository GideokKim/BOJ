#ifndef BOJ_2000_SRC_2745_BASE_CONVERSION_H_
#define BOJ_2000_SRC_2745_BASE_CONVERSION_H_

#include <iostream>
#include <string>

class BaseConversion {
 public:
  void SetInputs() { std::cin >> N >> B; }

  int Calculate() {
    int result = 0;
    int multiplier = 1;
    for (int i = N.size() - 1; i >= 0; i--) {
      int digit = 0;
      if (N[i] >= 'A' && N[i] <= 'Z') {
        digit = N[i] - 'A' + 10;
      } else {
        digit = N[i] - '0';
      }
      result += digit * multiplier;
      multiplier *= B;
    }
    return result;
  }

 private:
  std::string N;
  int B;
};

#ifdef BOJ_SUBMIT
int main() {
  BaseConversion base_conversion;
  base_conversion.SetInputs();
  std::cout << base_conversion.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2745_BASE_CONVERSION_H_
