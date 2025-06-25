#ifndef BOJ_24000_SRC_24262_ALGORITHM_CLASS_TIME_H_
#define BOJ_24000_SRC_24262_ALGORITHM_CLASS_TIME_H_

#include <iostream>

class AlgorithmClassTime {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() const { std::cout << "1\n0"; }

 private:
  long long n;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  AlgorithmClassTime algorithm_class_time;
  algorithm_class_time.SetInputs();
  algorithm_class_time.Calculate();
  algorithm_class_time.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24262_ALGORITHM_CLASS_TIME_H_
