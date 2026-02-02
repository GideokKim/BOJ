#ifndef BOJ_19000_SRC_19564_REPEATATION_H_
#define BOJ_19000_SRC_19564_REPEATATION_H_

#include <iostream>
#include <string>
#include <vector>

class Repeatation {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    char ascii_index = 0;
    result = 1;
    for (auto target : input) {
      if (ascii_index < target) {
        ascii_index = target;
        continue;
      }
      ascii_index = target;
      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Repeatation repeatation;
  repeatation.SetInputs();
  repeatation.Calculate();
  repeatation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_19000_SRC_19564_REPEATATION_H_
