#ifndef BOJ_33000_SRC_33165_FOOTRACE_H_
#define BOJ_33000_SRC_33165_FOOTRACE_H_

#include <iostream>

class Footrace {
 public:
  void SetInputs() { std::cin >> t >> v; }

  int Calculate() { return t * v; }

 private:
  int t;
  int v;
};

#ifdef BOJ_SUBMIT
int main() {
  Footrace footrace;
  footrace.SetInputs();
  std::cout << footrace.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33165_FOOTRACE_H_
