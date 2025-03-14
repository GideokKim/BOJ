#ifndef BOJ_1000_SRC_1440_TIME_MACHINE_H_
#define BOJ_1000_SRC_1440_TIME_MACHINE_H_

#include <iostream>
#include <string>
#include <vector>

class TimeMachine {
 public:
  void SetInputs() { std::cin >> time_string; }

  void Calculate() {
    result = 0;
    for (size_t index = 0; index < time_string.size(); index += 3) {
      int target = std::stoi(time_string.substr(index, 2));
      if (0 < target && target < 13) {
        result += 2;
      }
      if (60 <= target) {
        result = 0;
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string time_string;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TimeMachine time_machine;
  time_machine.SetInputs();
  time_machine.Calculate();
  time_machine.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1440_TIME_MACHINE_H_
