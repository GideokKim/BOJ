#ifndef BOJ_31000_SRC_31833_NOT_FOUND_H_
#define BOJ_31000_SRC_31833_NOT_FOUND_H_

#include <iostream>
#include <vector>

class NotFound {
 public:
  void SetInputs() {
    std::cin >> n;

    std::string target;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> target;
      a += target;
    }
    for (size_t i = 0; i < n; ++i) {
      std::cin >> target;
      b += target;
    }
  }

  void Calculate() {
    result = 0;
    long long num_a = std::stoll(a);
    long long num_b = std::stoll(b);
    result = num_a < num_b ? num_a : num_b;
  }
  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  NotFound not_found;
  not_found.SetInputs();
  not_found.Calculate();
  not_found.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31833_NOT_FOUND_H_
