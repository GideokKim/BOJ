#ifndef BOJ_24000_SRC_24086_HEIGHT_H_
#define BOJ_24000_SRC_24086_HEIGHT_H_

#include <iostream>

class Height {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void CalculateHeight() { height = b - a; }

  void PrintHeight() const { std::cout << height; }

 private:
  int a;
  int b;
  int height;
};

#ifdef BOJ_SUBMIT
int main() {
  Height height;
  height.SetInputs();
  height.CalculateHeight();
  height.PrintHeight();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24086_HEIGHT_H_
