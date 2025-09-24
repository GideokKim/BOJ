#ifndef BOJ_14000_SRC_14914_SPLIT_APPLE_AND_BANANA_H_
#define BOJ_14000_SRC_14914_SPLIT_APPLE_AND_BANANA_H_

#include <iostream>
#include <vector>

class SplitAppleAndBanana {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    for (long long num = 1; num <= a; ++num) {
      if (a % num == 0 && b % num == 0) {
        results.emplace_back(std::vector<long long>({num, a / num, b / num}));
      }
    }
  }

  void PrintResult() {
    for (const auto result : results) {
      std::cout << result[0] << " " << result[1] << " " << result[2] << "\n";
    }
  }

 private:
  long long a, b;
  std::vector<std::vector<long long>> results;
};

#ifdef BOJ_SUBMIT
int main() {
  SplitAppleAndBanana split_apple_and_banana;
  split_apple_and_banana.SetInputs();
  split_apple_and_banana.Calculate();
  split_apple_and_banana.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14914_SPLIT_APPLE_AND_BANANA_H_
