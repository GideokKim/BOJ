#ifndef BOJ_26000_SRC_26545_MATHEMATICS_H_
#define BOJ_26000_SRC_26545_MATHEMATICS_H_

#include <iostream>
#include <vector>

class Mathematics {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
      result += numbers[i];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> numbers;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Mathematics mathematics;
  mathematics.SetInputs();
  mathematics.Calculate();
  mathematics.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26545_MATHEMATICS_H_
