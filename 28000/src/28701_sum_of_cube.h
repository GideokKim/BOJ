#ifndef BOJ_28000_SRC_28701_SUM_OF_CUBE_H_
#define BOJ_28000_SRC_28701_SUM_OF_CUBE_H_

#include <iostream>

class SumOfCube {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    sum = n * (n + 1) / 2;
    cube = sum * sum;
  }

  void PrintResult() { std::cout << sum << "\n" << cube << "\n" << cube; }

 private:
  int n;
  int sum;
  int cube;
};

#ifdef BOJ_SUBMIT
int main() {
  SumOfCube sum_of_cube;
  sum_of_cube.SetInputs();
  sum_of_cube.Calculate();
  sum_of_cube.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28701_SUM_OF_CUBE_H_
