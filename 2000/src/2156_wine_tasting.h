#ifndef BOJ_2000_SRC_2156_WINE_TASTING_H_
#define BOJ_2000_SRC_2156_WINE_TASTING_H_

#include <algorithm>
#include <iostream>
#include <vector>

class WineTasting {
 public:
  void SetInputs() {
    std::cin >> number_of_wines;
    wines.resize(number_of_wines + 1, 0);
    for (size_t index = 1; index <= number_of_wines; ++index) {
      std::cin >> wines[index];
    }
    dp.resize(number_of_wines + 1, 0);
  }

  void Calculate() {
    dp[1] = wines[1];

    if (number_of_wines >= 2) {
      dp[2] = wines[1] + wines[2];
    }

    for (size_t index = 3; index <= number_of_wines; ++index) {
      dp[index] =
          std::max(dp[index - 1],
                   std::max(dp[index - 2] + wines[index],
                            dp[index - 3] + wines[index - 1] + wines[index]));
    }
  }

  void PrintResult() { std::cout << *std::max_element(dp.begin(), dp.end()); }

 private:
  size_t number_of_wines;
  std::vector<size_t> wines;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  WineTasting wine_tasting;
  wine_tasting.SetInputs();
  wine_tasting.Calculate();
  wine_tasting.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2156_WINE_TASTING_H_
