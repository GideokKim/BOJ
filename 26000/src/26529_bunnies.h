#ifndef BOJ_26000_SRC_26529_BUNNIES_H_
#define BOJ_26000_SRC_26529_BUNNIES_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Bunnies {
 public:
  void SetInputs() {
    size_t number_of_bunny;
    std::cin >> number_of_bunny;
    size_t x;
    for (size_t i = 0; i < number_of_bunny; i++) {
      std::cin >> x;
      numbers.push_back(x);
    }
    dp.resize(x + 1, 0);
  }

  void Calculate() {
    dp[0] = 1;
    dp[1] = 1;
    size_t max_value = *std::max_element(numbers.begin(), numbers.end());
    for (size_t i = 2; i <= max_value; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
  }

  void PrintResult() {
    for (size_t number : numbers) {
      std::cout << dp[number] << "\n";
    }
  }

 private:
  std::vector<size_t> numbers;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  Bunnies bunnies;
  bunnies.SetInputs();
  bunnies.Calculate();
  bunnies.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26529_BUNNIES_H_
