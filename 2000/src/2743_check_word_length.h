#ifndef BOJ_2000_SRC_2743_CHECK_WORD_LENGTH_H_
#define BOJ_2000_SRC_2743_CHECK_WORD_LENGTH_H_

#include <iostream>
#include <string>

class CheckWordLength {
 public:
  void SetInputs() { std::cin >> word; }

  void Calculate() { result = word.length(); }

  void PrintResult() { std::cout << result; }

 private:
  std::string word;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CheckWordLength check_word_length;
  check_word_length.SetInputs();
  check_word_length.Calculate();
  check_word_length.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2743_CHECK_WORD_LENGTH_H_
