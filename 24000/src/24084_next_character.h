#ifndef BOJ_24000_SRC_24084_NEXT_CHARACTER_H_
#define BOJ_24000_SRC_24084_NEXT_CHARACTER_H_

#include <iostream>
#include <string>
#include <vector>

class NextCharacter {
 public:
  void SetInputs() { std::cin >> n >> s; }

  void Calculate() {
    for (size_t i = 0; i < n - 1; ++i) {
      if (s[i + 1] == 'J') {
        results.push_back(s[i]);
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << '\n';
    }
  }

 private:
  size_t n;
  std::string s;
  std::vector<char> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NextCharacter next_character;
  next_character.SetInputs();
  next_character.Calculate();
  next_character.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24084_NEXT_CHARACTER_H_
