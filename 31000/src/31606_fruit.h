#ifndef BOJ_31000_SRC_31606_FRUIT_H_
#define BOJ_31000_SRC_31606_FRUIT_H_

#include <iostream>

class Fruit {
 public:
  void SetInputs() { std::cin >> x >> y; }

  void Calculate() { result = x + y + 3; }

  void PrintResult() { std::cout << result; }

 private:
  int x, y;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Fruit fruit;
  fruit.SetInputs();
  fruit.Calculate();
  fruit.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31606_FRUIT_H_
