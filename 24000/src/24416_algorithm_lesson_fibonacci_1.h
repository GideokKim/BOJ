#ifndef BOJ_24000_SRC_24416_ALGORITHM_LESSON_FIBONACCI_1_H_
#define BOJ_24000_SRC_24416_ALGORITHM_LESSON_FIBONACCI_1_H_

#include <iostream>
#include <vector>

class AlgorithmLessonFibonacci1 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    dp.resize(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (size_t i = 2; i <= n; i++) {
      dp[i] = dp[i - 1] + dp[i - 2];
    }
    result = dp[n];
  }

  void PrintResult() const { std::cout << result << " " << n - 2; }

 private:
  size_t n;
  long long result;
  std::vector<long long> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  AlgorithmLessonFibonacci1 algorithm_lesson_fibonacci1;
  algorithm_lesson_fibonacci1.SetInputs();
  algorithm_lesson_fibonacci1.Calculate();
  algorithm_lesson_fibonacci1.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24416_ALGORITHM_LESSON_FIBONACCI_1_H_
