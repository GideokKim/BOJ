#ifndef BOJ_2000_SRC_2490_YUTNORI_H_
#define BOJ_2000_SRC_2490_YUTNORI_H_

#include <iostream>
#include <vector>

class Yutnori {
 public:
  void SetInputs() {
    numbers.resize(3);
    for (size_t i = 0; i < 3; ++i) {
      int num = 0;
      for (size_t j = 0; j < 4; ++j) {
        int target;
        std::cin >> target;
        num += target;
      }
      numbers[i] = num;
    }
  }

  void Calculate() {
    results.resize(3, 'D');
    for (size_t i = 0; i < 3; ++i) {
      results[i] -= numbers[i];
      if (numbers[i] == 4) {
        results[i] = 'E';
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<int> numbers;
  std::vector<char> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Yutnori yutnori;
  yutnori.SetInputs();
  yutnori.Calculate();
  yutnori.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2490_YUTNORI_H_
