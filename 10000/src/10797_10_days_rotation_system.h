#ifndef BOJ_10000_SRC_10797_10_DAYS_ROTATION_SYSTEM_H_
#define BOJ_10000_SRC_10797_10_DAYS_ROTATION_SYSTEM_H_

#include <iostream>
#include <vector>

class TenDaysRotationSystem {
 public:
  void SetInputs() {
    std::cin >> target_day;
    numbers.resize(10, 0);
    for (size_t i = 0; i < 5; i++) {
      size_t number;
      std::cin >> number;
      numbers[number]++;
    }
  }

  void Calculate() { result = numbers[target_day]; }

  void PrintResult() { std::cout << result; }

 private:
  size_t target_day;
  std::vector<size_t> numbers;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TenDaysRotationSystem ten_days_rotation_system;
  ten_days_rotation_system.SetInputs();
  ten_days_rotation_system.Calculate();
  ten_days_rotation_system.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10797_10_DAYS_ROTATION_SYSTEM_H_
