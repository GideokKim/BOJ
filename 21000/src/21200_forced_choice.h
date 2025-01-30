#ifndef BOJ_21000_SRC_21200_FORCED_CHOICE_H_
#define BOJ_21000_SRC_21200_FORCED_CHOICE_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class ForcedChoice {
 public:
  void SetInputs() {
    int n;
    std::cin >> n >> p >> s;
  }

  void Calculate() {
    is_kept.resize(std::stoi(s), false);

    int number_of_selected_cards;
    for (int i = 0; i < std::stoi(s); ++i) {
      std::cin >> number_of_selected_cards;

      std::string input;
      std::getline(std::cin, input);
      std::stringstream ss(input);
      std::string card_number;
      while (ss >> card_number) {
        if (card_number == p) {
          is_kept[i] = true;
          break;
        }
      }
    }
  }

  void PrintResult() {
    for (const auto& result : is_kept) {
      std::cout << (result ? "KEEP" : "REMOVE") << "\n";
    }
  }

 private:
  std::string p, s;
  std::vector<bool> is_kept;
};

#ifdef BOJ_SUBMIT
int main() {
  ForcedChoice forced_choice;
  forced_choice.SetInputs();
  forced_choice.Calculate();
  forced_choice.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21200_FORCED_CHOICE_H_
