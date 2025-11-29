#ifndef BOJ_10000_SRC_10093_NUMBERS_H_
#define BOJ_10000_SRC_10093_NUMBERS_H_

#include <iostream>
#include <vector>

class Numbers {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    if (a > b) {
      long long temp = a;
      a = b;
      b = temp;
    }

    if (a == b) {
      result = 0;
      return;
    }

    result = b - a - 1;
  }

  void PrintResult() {
    std::cout << result << "\n";
    for (long long num = a + 1; num < b; ++num) {
      std::cout << num << " ";
    }
  }

 private:
  long long a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Numbers numbers;
  numbers.SetInputs();
  numbers.Calculate();
  numbers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10093_NUMBERS_H_
