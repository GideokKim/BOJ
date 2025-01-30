#ifndef BOJ_10000_SRC_10988_CHECK_PALINDROME_H_
#define BOJ_10000_SRC_10988_CHECK_PALINDROME_H_

#include <algorithm>
#include <iostream>
#include <string>

class CheckPalindrome {
 public:
  void SetInputs() { std::cin >> input_string; }

  void Calculate() {
    auto original_string = input_string;
    std::reverse(input_string.begin(), input_string.end());
    if (original_string == input_string) {
      result = 1;
    } else {
      result = 0;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input_string;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  CheckPalindrome check_palindrome;
  check_palindrome.SetInputs();
  check_palindrome.Calculate();
  check_palindrome.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10988_CHECK_PALINDROME_H_
