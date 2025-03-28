#ifndef BOJ_18000_SRC_18408_THREE_INTEGERS_H_
#define BOJ_18000_SRC_18408_THREE_INTEGERS_H_

#include <iostream>

class ThreeIntegers {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    result = a + b + c;
    if (result < 5) {
      result = 1;
    } else {
      result = 2;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b, c;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ThreeIntegers three_integers;
  three_integers.SetInputs();
  three_integers.Calculate();
  three_integers.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18408_THREE_INTEGERS_H_
