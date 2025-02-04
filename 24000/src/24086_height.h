#ifndef BOJ_24000_SRC_24086_HEIGHT_H_
#define BOJ_24000_SRC_24086_HEIGHT_H_

#include <iostream>

class Height {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { height = b - a; }

  void PrintResult() const { std::cout << height; }

 private:
  int a;
  int b;
  int height;
};

#ifdef BOJ_SUBMIT
int main() {
  Height height;
  height.SetInputs();
  height.Calculate();
  height.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24086_HEIGHT_H_
