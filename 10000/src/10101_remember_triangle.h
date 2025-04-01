#ifndef BOJ_10000_SRC_10101_REMEMBER_TRIANGLE_H_
#define BOJ_10000_SRC_10101_REMEMBER_TRIANGLE_H_

#include <iostream>
#include <string>

class RememberTriangle {
 public:
  void SetInputs() { std::cin >> a >> b >> c; }

  void Calculate() {
    if (a + b + c != 180) {
      result = "Error";
      return;
    }

    if (a == b && b == c) {
      result = "Equilateral";
    } else if (a == b || b == c || c == a) {
      result = "Isosceles";
    } else {
      result = "Scalene";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int a, b, c;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  RememberTriangle rememberTriangle;
  rememberTriangle.SetInputs();
  rememberTriangle.Calculate();
  rememberTriangle.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10101_REMEMBER_TRIANGLE_H_
