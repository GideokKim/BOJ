#ifndef BOJ_27000_SRC_27332_NOVEMBER_H_
#define BOJ_27000_SRC_27332_NOVEMBER_H_

#include <iostream>

class November {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    result = a + 7 * b;
    if (result > 30) {
      result = 0;
    } else {
      result = 1;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  November november;
  november.SetInputs();
  november.Calculate();
  november.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27332_NOVEMBER_H_
