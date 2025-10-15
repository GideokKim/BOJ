#ifndef BOJ_2000_SRC_2959_TURTLE_H_
#define BOJ_2000_SRC_2959_TURTLE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Turtle {
 public:
  void SetInputs() {
    numbers.resize(4);
    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
    std::sort(numbers.begin(), numbers.end());
  }

  void Calculate() { result = numbers[0] * numbers[2]; }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> numbers;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Turtle turtle;
  turtle.SetInputs();
  turtle.Calculate();
  turtle.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2959_TURTLE_H_
