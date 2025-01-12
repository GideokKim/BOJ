#ifndef BOJ_31000_SRC_31606_FRUIT_H_
#define BOJ_31000_SRC_31606_FRUIT_H_

#include <iostream>

class Minutes {
 public:
  void SetInputs() { std::cin >> x >> y; }

  int Calculate() { return x + y + 3; }

 private:
  int x;
  int y;
};

#ifdef BOJ_SUBMIT
int main() {
  Minutes minutes;
  minutes.SetInputs();
  std::cout << minutes.Calculate();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31606_FRUIT_H_
