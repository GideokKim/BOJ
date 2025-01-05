#ifndef BOJ_27000_SRC_27327_HOUR_H_
#define BOJ_27000_SRC_27327_HOUR_H_

#include <iostream>

class Hour {
 public:
  void SetInputs() { std::cin >> x; }

  int Calculate() { return x * 24; }

 private:
  int x;
};

#ifdef BOJ_SUBMIT
int main() {
  Hour hour;
  hour.SetInputs();
  std::cout << hour.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27323_RECTANGLE_H_
