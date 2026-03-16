#ifndef BOJ_27000_SRC_27219_ROBINSON_CRUSOE_H_
#define BOJ_27000_SRC_27219_ROBINSON_CRUSOE_H_

#include <iostream>
#include <string>

class RobinsonCrusoe {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = std::string(n / 5, 'V');
    result += std::string(n % 5, 'I');
  }

  void PrintResult() const { std::cout << result; }

 private:
  size_t n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  RobinsonCrusoe robinson_crusoe;
  robinson_crusoe.SetInputs();
  robinson_crusoe.Calculate();
  robinson_crusoe.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27219_ROBINSON_CRUSOE_H_
