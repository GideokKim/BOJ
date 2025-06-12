#ifndef BOJ_29000_SRC_29751_TRIANGLE_H_
#define BOJ_29000_SRC_29751_TRIANGLE_H_

#include <iostream>
#include <vector>

class Triangle {
 public:
  void SetInputs() {
    std::cin >> w >> h;
    std::cout << std::fixed;
    std::cout.precision(1);
  }

  void Calculate() { result = static_cast<double>(w * h) * 0.5; }

  void PrintResult() { std::cout << result; }

 private:
  int w, h;
  double result;
};

#ifdef BOJ_SUBMIT
int main() {
  Triangle triangle;
  triangle.SetInputs();
  triangle.Calculate();
  triangle.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_29000_SRC_29751_TRIANGLE_H_
