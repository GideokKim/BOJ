#ifndef BOJ_24000_SRC_24082_CUBE_H_
#define BOJ_24000_SRC_24082_CUBE_H_

#include <iostream>

class Cube {
 public:
  void SetInputs() { std::cin >> X; }

  void Calculate() { cube_number = X * X * X; }

  void PrintResult() { std::cout << cube_number; }

 private:
  size_t X;
  size_t cube_number;
};

#ifdef BOJ_SUBMIT
int main() {
  Cube cube;
  cube.SetInputs();
  cube.Calculate();
  cube.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24082_CUBE_H_
