#ifndef BOJ_32000_SRC_32260_A_PLUS_B_H_
#define BOJ_32000_SRC_32260_A_PLUS_B_H_

#include <iostream>

class APlusB {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = a + b; }

  void PrintResult() { std::cout << result; }

 private:
  int a, b;
  int result;
  ;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  APlusB a_plus_b;
  a_plus_b.SetInputs();
  a_plus_b.Calculate();
  a_plus_b.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32260_A_PLUS_B_H_
