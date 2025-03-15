#ifndef BOJ_1000_SRC_1932_INTEGER_TRIANGLE_H_
#define BOJ_1000_SRC_1932_INTEGER_TRIANGLE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class IntegerTriangle {
 public:
  void SetInputs() {
    std::cin >> n;
    results.resize(1, 0);
  }

  void Calculate() {
    for (int i = 0; i < n; ++i) {
      std::vector<int> numbers;
      numbers.resize(i + 1, 0);
      for (int j = 0; j <= i; ++j) {
        std::cin >> numbers[j];
      }

      for (size_t index = 0; index < numbers.size(); ++index) {
        if (index == 0) {
          numbers[index] = results[index] + numbers[index];
        } else if (index == numbers.size() - 1) {
          numbers[index] = results[index - 1] + numbers[index];
        } else {
          numbers[index] =
              std::max(results[index - 1], results[index]) + numbers[index];
        }
      }
      results = numbers;
    }
    max_result = *std::max_element(results.begin(), results.end());
  }

  void PrintResult() { std::cout << max_result; }

 private:
  int n;
  std::vector<int> results;
  int max_result;
};

#ifdef BOJ_SUBMIT
int main() {
  IntegerTriangle integer_triangle;
  integer_triangle.SetInputs();
  integer_triangle.Calculate();
  integer_triangle.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1932_INTEGER_TRIANGLE_H_
