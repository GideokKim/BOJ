#ifndef BOJ_31000_SRC_31654_ADDING_TROUBLE_H_
#define BOJ_31000_SRC_31654_ADDING_TROUBLE_H_

#include <iostream>
#include <string>

class AddingTrouble {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() { result = a + b == c ? "correct!" : "wrong!"; }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b, c;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  AddingTrouble adding_trouble;
  adding_trouble.SetInputs();
  adding_trouble.Calculate();
  adding_trouble.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31654_ADDING_TROUBLE_H_