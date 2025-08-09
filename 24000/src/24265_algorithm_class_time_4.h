#ifndef BOJ_24000_SRC_24265_ALGORITHM_CLASS_TIME_4_H_
#define BOJ_24000_SRC_24265_ALGORITHM_CLASS_TIME_4_H_

#include <iostream>

class AlgorithmClassTime4 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n * (n - 1) / 2; }

  void PrintResult() const { std::cout << result << "\n2"; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  AlgorithmClassTime4 algorithm_class_time_4;
  algorithm_class_time_4.SetInputs();
  algorithm_class_time_4.Calculate();
  algorithm_class_time_4.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24265_ALGORITHM_CLASS_TIME_4_H_
