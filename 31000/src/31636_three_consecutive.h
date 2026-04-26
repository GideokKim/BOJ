#ifndef BOJ_31000_SRC_31636_THREE_CONSECUTIVE_H_
#define BOJ_31000_SRC_31636_THREE_CONSECUTIVE_H_

#include <iostream>
#include <string>

class ThreeConsecutive {
 public:
  void SetInputs() { std::cin >> n >> input; }

  void Calculate() {
    result = "No";
    if (input.find("ooo") != std::string::npos) {
      result = "Yes";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThreeConsecutive three_consecutive;
  three_consecutive.SetInputs();
  three_consecutive.Calculate();
  three_consecutive.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31636_THREE_CONSECUTIVE_H_