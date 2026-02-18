#ifndef BOJ_31000_SRC_31616_MATCHED_LETTERS_H_
#define BOJ_31000_SRC_31616_MATCHED_LETTERS_H_

#include <iostream>
#include <set>
#include <string>

class MatchedLetters {
 public:
  void SetInputs() { std::cin >> n >> input; }

  void Calculate() {
    std::set<int> char_set;
    for (size_t i = 0; i < n; ++i) {
      char_set.insert(input[i]);
    }

    result = char_set.size() == 1 ? "Yes" : "No";
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  MatchedLetters matched_letters;
  matched_letters.SetInputs();
  matched_letters.Calculate();
  matched_letters.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31616_MATCHED_LETTERS_H_