#ifndef BOJ_30000_SRC_30224_LUCKY_7_H_
#define BOJ_30000_SRC_30224_LUCKY_7_H_

#include <iostream>
#include <string>

class Lucky7 {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 0;
    for (const auto& target : input) {
      if (target == '7') {
        result = 2;
        break;
      }
    }

    long long input_number = std::stoll(input);
    if (input_number % 7 == 0) {
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Lucky7 lucky_7;
  lucky_7.SetInputs();
  lucky_7.Calculate();
  lucky_7.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30224_LUCKY_7_H_
