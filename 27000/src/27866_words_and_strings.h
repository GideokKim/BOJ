#ifndef BOJ_27000_SRC_27866_WORDS_AND_STRINGS_H_
#define BOJ_27000_SRC_27866_WORDS_AND_STRINGS_H_

#include <iostream>
#include <string>
class WordsAndStrings {
 public:
  void SetInputs() { std::cin >> target_string >> index; }

  char Calculate() { return target_string[index - 1]; }

 private:
  std::string target_string;
  int index;
};

#ifdef BOJ_SUBMIT
int main() {
  WordsAndStrings words_and_strings;
  words_and_strings.SetInputs();
  std::cout << words_and_strings.Calculate();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27866_WORDS_AND_STRINGS_H_
