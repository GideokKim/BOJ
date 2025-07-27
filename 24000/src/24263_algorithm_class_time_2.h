#ifndef BOJ_24000_SRC_24263_ALGORITHM_CLASS_TIME_2_H_
#define BOJ_24000_SRC_24263_ALGORITHM_CLASS_TIME_2_H_

#include <iostream>

class AlgorithmClassTime2 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() const { std::cout << n << "\n1"; }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  AlgorithmClassTime2 algorithm_class_time_2;
  algorithm_class_time_2.SetInputs();
  algorithm_class_time_2.Calculate();
  algorithm_class_time_2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24263_ALGORITHM_CLASS_TIME_2_H_
