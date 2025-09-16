#ifndef BOJ_34000_SRC_34346_DIAGONAL_H_
#define BOJ_34000_SRC_34346_DIAGONAL_H_

#include <iostream>

class Diagonal {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() { result = input % 2 ? 1 : 2; }

  void PrintResult() { std::cout << result; }

 private:
  size_t input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Diagonal diagonal;
  diagonal.SetInputs();
  diagonal.Calculate();
  diagonal.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34346_DIAGONAL_H_
