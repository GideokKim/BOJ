#ifndef BOJ_33000_SRC_33810_SCICOMLOVE_2025_H_
#define BOJ_33000_SRC_33810_SCICOMLOVE_2025_H_

#include <iostream>
#include <string>

class Scicomlove2025 {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    std::string answer = "SciComLove";
    result = 0;
    for (size_t i = 0; i < answer.size(); ++i) {
      if (input[i] != answer[i]) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Scicomlove2025 scicomlove2025;
  scicomlove2025.SetInputs();
  scicomlove2025.Calculate();
  scicomlove2025.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33810_SCICOMLOVE_2025_H_
