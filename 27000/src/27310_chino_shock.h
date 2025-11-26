#ifndef BOJ_27000_SRC_27310_CHINO_SHOCK_H_
#define BOJ_27000_SRC_27310_CHINO_SHOCK_H_

#include <iostream>
#include <string>

class ChinoShock {
 public:
  void SetInputs() { std::cin >> emoji; }

  void Calculate() {
    result = 2;
    for (size_t i = 0; i < emoji.size(); ++i) {
      if (emoji[i] == '_') {
        result += 5;
      }
      ++result;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  std::string emoji;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  ChinoShock chino_shock;
  chino_shock.SetInputs();
  chino_shock.Calculate();
  chino_shock.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27310_CHINO_SHOCK_H_
