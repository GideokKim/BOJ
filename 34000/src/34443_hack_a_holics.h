#ifndef BOJ_34000_SRC_34443_HACK_A_HOLICS_H_
#define BOJ_34000_SRC_34443_HACK_A_HOLICS_H_

#include <iostream>

class HackAHolics {
 public:
  void SetInputs() { std::cin >> n >> c >> p; }

  void Calculate() { result = n * p; }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, c, p;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  HackAHolics hackAHolics;
  hackAHolics.SetInputs();
  hackAHolics.Calculate();
  hackAHolics.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34443_HACK_A_HOLICS_H_
