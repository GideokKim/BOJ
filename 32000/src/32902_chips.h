#ifndef BOJ_32000_SRC_32902_CHIPS_H_
#define BOJ_32000_SRC_32902_CHIPS_H_

#include <iostream>

class Chips {
 public:
  void SetInputs() { std::cin >> k >> n; }

  void Calculate() {
    minimum = n + 1;
    maximum = n * k + 1;
  }

  void PrintResult() { std::cout << minimum << " " << maximum; }

 private:
  size_t k, n;
  size_t minimum, maximum;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Chips chips;
  chips.SetInputs();
  chips.Calculate();
  chips.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32902_CHIPS_H_
