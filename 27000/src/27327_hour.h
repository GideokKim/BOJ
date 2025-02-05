#ifndef BOJ_27000_SRC_27327_HOUR_H_
#define BOJ_27000_SRC_27327_HOUR_H_

#include <iostream>

class Hour {
 public:
  void SetInputs() { std::cin >> x; }

  void Calculate() { result = x * 24; }

  void PrintResult() const { std::cout << result; }

 private:
  int x;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Hour hour;
  hour.SetInputs();
  hour.Calculate();
  hour.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27327_HOUR_H_
