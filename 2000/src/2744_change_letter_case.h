#ifndef BOJ_2000_SRC_2744_CHANGE_LETTER_CASE_H_
#define BOJ_2000_SRC_2744_CHANGE_LETTER_CASE_H_

#include <iostream>
#include <string>

class ChangeLetterCase {
 public:
  void SetInputs() { std::cin >> input_string; }

  void Calculate() {
    for (int index = 0; index < input_string.size(); ++index) {
      if (input_string[index] >= 'A' && input_string[index] <= 'Z') {
        result += std::tolower(input_string[index]);
      } else {
        result += std::toupper(input_string[index]);
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input_string;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  ChangeLetterCase change_letter_case;
  change_letter_case.SetInputs();
  change_letter_case.Calculate();
  change_letter_case.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2744_CHANGE_LETTER_CASE_H_
