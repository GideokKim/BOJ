#ifndef BOJ_14000_SRC_14581_SURROUNDING_FAN_H_
#define BOJ_14000_SRC_14581_SURROUNDING_FAN_H_

#include <iostream>
#include <string>

class SurroundingFan {
 public:
  void SetInputs() { std::cin >> name; }

  void Calculate() {}

  void PrintResult() {
    std::cout << ":fan::fan::fan:\n:fan::" << name << "::fan:\n:fan::fan::fan:";
  }

 private:
  std::string name;
};

#ifdef BOJ_SUBMIT
int main() {
  SurroundingFan surrounding_fan;
  surrounding_fan.SetInputs();
  surrounding_fan.Calculate();
  surrounding_fan.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14581_SURROUNDING_FAN_H_
