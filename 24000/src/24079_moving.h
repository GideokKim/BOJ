#ifndef BOJ_24000_SRC_24079_MOVING_H_
#define BOJ_24000_SRC_24079_MOVING_H_

#include <iostream>

class Moving {
 public:
  void SetInputs() { std::cin >> x >> y >> z; }

  void Calculate() { result = x + y <= z ? 1 : 0; }

  void PrintResult() const { std::cout << result; }

 private:
  size_t x, y, z;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Moving moving;
  moving.SetInputs();
  moving.Calculate();
  moving.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24079_MOVING_H_
