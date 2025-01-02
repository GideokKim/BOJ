#ifndef BOJ_6000_SRC_6603_LOTTO_H_
#define BOJ_6000_SRC_6603_LOTTO_H_

#include <iostream>
#include <vector>

class Lotto {
 public:
  void SetInputs() {
    int number_of_candidates;
    while (true) {
      std::cin >> number_of_candidates;
      if (number_of_candidates == 0) {
        break;
      }
      numbers.clear();
      numbers.resize(number_of_candidates);
      for (int j = 0; j < number_of_candidates; j++) {
        std::cin >> numbers[j];
      }
      current_combination.clear();
      current_combination.resize(6);
      GenerateCombinations(0, 0);
      std::cout << "\n";
    }
  }

 private:
  void GenerateCombinations(int index, int depth) {
    if (depth == 6) {
      for (int i = 0; i < 6; i++) {
        std::cout << current_combination[i];
        if (i != 5) {
          std::cout << " ";
        } else {
          std::cout << "\n";
        }
      }
      return;
    }
    for (int i = index; i < static_cast<int>(numbers.size()); i++) {
      current_combination[depth] = numbers[i];
      GenerateCombinations(i + 1, depth + 1);
    }
  }

  std::vector<int> numbers;
  std::vector<int> current_combination;
};

#ifdef BOJ_SUBMIT
int main() {
  Lotto lotto;
  lotto.SetInputs();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6603_LOTTO_H_
