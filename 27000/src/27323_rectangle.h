#ifndef BOJ_27000_SRC_27323_RECTANGLE_H_
#define BOJ_27000_SRC_27323_RECTANGLE_H_

#include <iostream>

class Rectangle {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = a * b; }

  void PrintResult() const { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Rectangle rectangle;
  rectangle.SetInputs();
  rectangle.Calculate();
  rectangle.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27323_RECTANGLE_H_
