#ifndef BOJ_31000_SRC_31064_MINUTES_H_
#define BOJ_31000_SRC_31064_MINUTES_H_

#include <iostream>

class Minutes {
 public:
  void SetInputs() { std::cin >> h >> m; }

  int Calculate() { return h * 60 + m; }

 private:
  int h;
  int m;
};

#ifdef BOJ_SUBMIT
int main() {
  Minutes minutes;
  minutes.SetInputs();
  std::cout << minutes.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31064_MINUTES_H_
