#ifndef BOJ_28000_SRC_28444_HI_ARC_H_
#define BOJ_28000_SRC_28444_HI_ARC_H_

#include <iostream>

class HiArc {
 public:
  void SetInputs() { std::cin >> h >> i >> a >> r >> c; }

  void Calculate() { result = h * i - a * r * c; }

  void PrintResult() { std::cout << result; }

 private:
  long long h, i, a, r, c;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  HiArc hi_arc;
  hi_arc.SetInputs();
  hi_arc.Calculate();
  hi_arc.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28444_HI_ARC_H_
