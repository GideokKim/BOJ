#ifndef BOJ_18000_SRC_18127_MODEL_CRYSTAL_H_
#define BOJ_18000_SRC_18127_MODEL_CRYSTAL_H_

#include <iostream>

class ModelCrystal {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = (b + 1) * ((a - 2) * b + 2) / 2; }

  void PrintResult() { std::cout << result; }

 private:
  size_t a, b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  // 입출력 최적화를 위한 코드
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ModelCrystal modelCrystal;
  modelCrystal.SetInputs();
  modelCrystal.Calculate();
  modelCrystal.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18127_MODEL_CRYSTAL_H_
