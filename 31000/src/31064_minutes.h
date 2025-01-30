#ifndef BOJ_31000_SRC_31064_MINUTES_H_
#define BOJ_31000_SRC_31064_MINUTES_H_

#include <iostream>

class Minutes {
 public:
  void SetInputs() { std::cin >> h >> m; }

  void Calculate() { result = h * 60 + m; }

  void PrintResult() { std::cout << result; }

 private:
  int h, m;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Minutes minutes;
  minutes.SetInputs();
  minutes.Calculate();
  minutes.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31064_MINUTES_H_
