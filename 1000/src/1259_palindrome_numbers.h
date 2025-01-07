#ifndef BOJ_1000_SRC_1259_PALINDROME_NUMBERS_H_
#define BOJ_1000_SRC_1259_PALINDROME_NUMBERS_H_

#include <algorithm>
#include <iostream>
#include <string>

class PalindromeNumbers {
 public:
  void Calculate() {
    std::string number;
    std::cin >> number;

    while (number != "0") {
      auto original_number = number;
      std::reverse(number.begin(), number.end());
      if (original_number == number) {
        std::cout << "yes\n";
      } else {
        std::cout << "no\n";
      }
      std::cin >> number;
    }
  }
};

#ifdef BOJ_SUBMIT
int main() {
  PalindromeNumbers palindrome_numbers;
  palindrome_numbers.Calculate();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1259_PALINDROME_NUMBERS_H_
