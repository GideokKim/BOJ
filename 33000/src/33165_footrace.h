#ifndef BOJ_33000_SRC_33165_FOOTRACE_H_
#define BOJ_33000_SRC_33165_FOOTRACE_H_

#include <iostream>

class Footrace {
 public:
  void SetInputs() { std::cin >> t >> v; }

  void Calculate() { result = t * v; }

  void PrintResult() { std::cout << result; }

 private:
  int t;
  int v;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  Footrace footrace;
  footrace.SetInputs();
  footrace.Calculate();
  footrace.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33165_FOOTRACE_H_
