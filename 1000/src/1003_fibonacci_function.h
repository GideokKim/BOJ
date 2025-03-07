#ifndef BOJ_1000_SRC_1003_FIBONACCI_FUNCTION_H_
#define BOJ_1000_SRC_1003_FIBONACCI_FUNCTION_H_

#include <algorithm>
#include <iostream>
#include <vector>

class FibonacciFunction {
 public:
  void SetInputs() {
    std::cin >> t;
    zero_count.resize(41, 0);
    one_count.resize(41, 0);
  }

  void Calculate() {
    zero_count[0] = 1;
    one_count[0] = 0;
    zero_count[1] = 0;
    one_count[1] = 1;
    for (size_t index = 2; index <= 40; ++index) {
      zero_count[index] = zero_count[index - 1] + zero_count[index - 2];
      one_count[index] = one_count[index - 1] + one_count[index - 2];
    }
  }

  void PrintResult() {
    size_t n;
    for (size_t i = 0; i < t; ++i) {
      std::cin >> n;
      std::cout << zero_count[n] << " " << one_count[n] << std::endl;
    }
  }

 private:
  size_t t;
  std::vector<size_t> zero_count;
  std::vector<size_t> one_count;
};

#ifdef BOJ_SUBMIT
int main() {
  FibonacciFunction fibonacci_function;
  fibonacci_function.SetInputs();
  fibonacci_function.Calculate();
  fibonacci_function.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1003_FIBONACCI_FUNCTION_H_
