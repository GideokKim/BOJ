#ifndef BOJ_10000_SRC_10987_NUMBER_OF_VOWEL_H_
#define BOJ_10000_SRC_10987_NUMBER_OF_VOWEL_H_

#include <algorithm>
#include <iostream>
#include <string>

class NumberOfVowel {
 public:
  void SetInputs() { std::cin >> input_string; }

  void Calculate() {
    result = 0;
    for (auto c : input_string) {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        result++;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input_string;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  NumberOfVowel number_of_vowel;
  number_of_vowel.SetInputs();
  number_of_vowel.Calculate();
  number_of_vowel.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10987_NUMBER_OF_VOWEL_H_
