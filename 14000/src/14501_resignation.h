#ifndef BOJ_14000_SRC_14501_RESIGNATION_H_
#define BOJ_14000_SRC_14501_RESIGNATION_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Resignation {
 public:
  void SetInputs() {
    std::cin >> n;
    dp.resize(n + 1, std::vector<long long>(6, 0));
    size_t index;
    for (size_t i = 1; i <= n; ++i) {
      std::cin >> index;
      std::cin >> dp[i][index];
    }

    result.resize(n + 1, 0);
  }

  void Calculate() {
    for (size_t index = 1; index <= n; ++index) {
      size_t max_index = index > 5 ? 5 : index;
      for (size_t i = 0; i < max_index; ++i) {
        result[index] = std::max(result[index],
                                 dp[index - i][i + 1] + result[index - i - 1]);
      }
    }
  }

  void PrintResult() {
    std::cout << *std::max_element(result.begin(), result.end());
  }

 private:
  size_t n;
  std::vector<std::vector<long long>> dp;
  std::vector<long long> result;
};

#ifdef BOJ_SUBMIT
int main() {
  Resignation resignation;
  resignation.SetInputs();
  resignation.Calculate();
  resignation.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14501_RESIGNATION_H_
