#ifndef BOJ_11000_SRC_11549_IDENTIFYING_TEA_H_
#define BOJ_11000_SRC_11549_IDENTIFYING_TEA_H_

#include <iostream>

class IdentifyingTea {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    result = 0;

    for (size_t i = 0; i < 5; ++i) {
      size_t tea;
      std::cin >> tea;
      if (tea == t) {
        result++;
      }
    }
  }

  void Calculate() {}

  void PrintResult() { std::cout << result; }

 private:
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  IdentifyingTea identifying_tea;
  identifying_tea.SetInputs();
  identifying_tea.Calculate();
  identifying_tea.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11549_IDENTIFYING_TEA_H_
