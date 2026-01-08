#ifndef BOJ_34000_SRC_34823_YCPC_SCORE_H_
#define BOJ_34000_SRC_34823_YCPC_SCORE_H_

#include <iostream>

class YcpcScore {
 public:
  void SetInputs() { std::cin >> y >> c >> p; }

  void Calculate() {
    c >>= 1;
    result = y < c ? y : c;
    result = result < p ? result : p;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t y, c, p;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  YcpcScore ycpc_score;
  ycpc_score.SetInputs();
  ycpc_score.Calculate();
  ycpc_score.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34823_YCPC_SCORE_H_
