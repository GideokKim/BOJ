#ifndef BOJ_34000_SRC_34921_NERD_H_
#define BOJ_34000_SRC_34921_NERD_H_

#include <iostream>

class Nerd {
 public:
  void SetInputs() { std::cin >> a >> t; }

  void Calculate() {
    result = 10 + 2 * (25 - a + t);
    if (result < 0) {
      result = 0;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, t;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Nerd nerd;
  nerd.SetInputs();
  nerd.Calculate();
  nerd.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34921_NERD_H_
