#ifndef BOJ_27000_SRC_27323_RECTANGLE_H_
#define BOJ_27000_SRC_27323_RECTANGLE_H_

#include <iostream>

class Rectangle {
 public:
  void SetInputs() { std::cin >> A >> B; }

  int Calculate() { return A * B; }

 private:
  int A;
  int B;
};

#ifdef BOJ_SUBMIT
int main() {
  Rectangle rectangle;
  rectangle.SetInputs();
  std::cout << rectangle.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27323_RECTANGLE_H_
