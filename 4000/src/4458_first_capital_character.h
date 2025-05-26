#ifndef BOJ_4000_SRC_4458_FIRST_CAPITAL_CHARACTER_H_
#define BOJ_4000_SRC_4458_FIRST_CAPITAL_CHARACTER_H_

#include <iostream>
#include <string>
#include <vector>

class FirstCapitalCharacter {
 public:
  void SetInputs() {
    size_t count;
    std::cin >> count;
    std::cin.ignore();

    lines.resize(count);
    for (size_t i = 0; i < count; ++i) {
      std::getline(std::cin, lines[i]);
    }
  }

  void Calculate() {
    for (size_t i = 0; i < lines.size(); ++i) {
      if (lines[i][0] >= 'a') {
        lines[i][0] -= 32;
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < lines.size(); ++i) {
      std::cout << lines[i] << "\n";
    }
  }

 private:
  std::vector<std::string> lines;
};

#ifdef BOJ_SUBMIT
int main() {
  FirstCapitalCharacter first_capital_character;
  first_capital_character.SetInputs();
  first_capital_character.Calculate();
  first_capital_character.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4458_FIRST_CAPITAL_CHARACTER_H_
