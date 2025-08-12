#ifndef BOJ_24000_SRC_24267_ALGORITHM_CLASS_TIME_6_H_
#define BOJ_24000_SRC_24267_ALGORITHM_CLASS_TIME_6_H_

#include <iostream>

class AlgorithmClassTime6 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = (n - 2) * (n - 1) * n / 6; }

  void PrintResult() const { std::cout << result << "\n3"; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  AlgorithmClassTime6 algorithm_class_time_6;
  algorithm_class_time_6.SetInputs();
  algorithm_class_time_6.Calculate();
  algorithm_class_time_6.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24267_ALGORITHM_CLASS_TIME_6_H_
