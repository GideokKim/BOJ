#ifndef BOJ_15000_SRC_15232_RECTANGLES_H_
#define BOJ_15000_SRC_15232_RECTANGLES_H_

#include <iostream>

class Rectangles {
 public:
  void SetInputs() { std::cin >> r >> c; }

  void Calculate() {}

  void PrintResult() {
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        std::cout << "*";
      }
      std::cout << std::endl;
    }
  }

 private:
  int r, c;
};

#ifdef BOJ_SUBMIT
int main() {
  Rectangles rectangles;
  rectangles.SetInputs();
  rectangles.Calculate();
  rectangles.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15232_RECTANGLES_H_
