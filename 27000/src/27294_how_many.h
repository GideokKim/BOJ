#ifndef BOJ_27000_SRC_27294_HOW_MANY_H_
#define BOJ_27000_SRC_27294_HOW_MANY_H_

#include <iostream>

class HowMany {
 public:
  void SetInputs() { std::cin >> t >> s; }

  void Calculate() {
    if (t >= 12 && t <= 16 && s == 0) {
      result = 320;
    } else {
      result = 280;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  int t, s;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  HowMany how_many;
  how_many.SetInputs();
  how_many.Calculate();
  how_many.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27294_HOW_MANY_H_
