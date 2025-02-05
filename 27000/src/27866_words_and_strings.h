#ifndef BOJ_27000_SRC_27866_WORDS_AND_STRINGS_H_
#define BOJ_27000_SRC_27866_WORDS_AND_STRINGS_H_

#include <iostream>
#include <string>
class WordsAndStrings {
 public:
  void SetInputs() { std::cin >> target_string >> index; }

  void Calculate() { result = target_string[index - 1]; }

  void PrintResult() const { std::cout << result; }

 private:
  std::string target_string;
  int index;
  char result;
};

#ifdef BOJ_SUBMIT
int main() {
  WordsAndStrings words_and_strings;
  words_and_strings.SetInputs();
  words_and_strings.Calculate();
  words_and_strings.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27866_WORDS_AND_STRINGS_H_
