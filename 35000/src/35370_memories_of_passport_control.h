#ifndef BOJ_35000_SRC_35370_MEMORIES_OF_PASSPORT_CONTROL_H_
#define BOJ_35000_SRC_35370_MEMORIES_OF_PASSPORT_CONTROL_H_

#include <iostream>

class MemoriesOfPassportControl {
 public:
  void SetInputs() { std::cin >> k >> s; }

  void Calculate() { result = s / k + s % k; }

  void PrintResult() { std::cout << result; }

 private:
  size_t k, s;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  MemoriesOfPassportControl memories_of_passport_control;
  memories_of_passport_control.SetInputs();
  memories_of_passport_control.Calculate();
  memories_of_passport_control.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_35000_SRC_35370_MEMORIES_OF_PASSPORT_CONTROL_H_
