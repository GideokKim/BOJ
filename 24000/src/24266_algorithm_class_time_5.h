#ifndef BOJ_24000_SRC_24266_ALGORITHM_CLASS_TIME_5_H_
#define BOJ_24000_SRC_24266_ALGORITHM_CLASS_TIME_5_H_

#include <iostream>

class AlgorithmClassTime5 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() { result = n * n * n; }

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

  AlgorithmClassTime5 algorithm_class_time_5;
  algorithm_class_time_5.SetInputs();
  algorithm_class_time_5.Calculate();
  algorithm_class_time_5.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24266_ALGORITHM_CLASS_TIME_5_H_
