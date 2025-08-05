#ifndef BOJ_24000_SRC_24264_ALGORITHM_CLASS_TIME_3_H_
#define BOJ_24000_SRC_24264_ALGORITHM_CLASS_TIME_3_H_

#include <iostream>

class AlgorithmClassTime3 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() const { std::cout << n * n << "\n2"; }

 private:
  size_t n;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  AlgorithmClassTime3 algorithm_class_time_3;
  algorithm_class_time_3.SetInputs();
  algorithm_class_time_3.Calculate();
  algorithm_class_time_3.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24264_ALGORITHM_CLASS_TIME_3_H_
