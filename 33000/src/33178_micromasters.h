#ifndef BOJ_33000_SRC_33178_MICROMASTERS_H_
#define BOJ_33000_SRC_33178_MICROMASTERS_H_

#include <iostream>

class Micromasters {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = n / 10;
  }

  void PrintResult() { std::cout << result; }

 private:
  int n;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Micromasters micromasters;
  micromasters.SetInputs();
  micromasters.Calculate();
  micromasters.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33178_MICROMASTERS_H_