#ifndef BOJ_33000_SRC_33162_WALKING_H_
#define BOJ_33000_SRC_33162_WALKING_H_

#include <iostream>

class Walking {
 public:
  void SetInputs() { std::cin >> x; }

  void Calculate() { result = (x >> 1) + (x % 2) * 3; }

  void PrintResult() { std::cout << result; }

 private:
  int x;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Walking walking;
  walking.SetInputs();
  walking.Calculate();
  walking.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33162_WALKING_H_
