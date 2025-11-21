#ifndef BOJ_29000_SRC_29720_SO_HOW_MANY_PROBLEMS_DID_YOU_SOLVE_H_
#define BOJ_29000_SRC_29720_SO_HOW_MANY_PROBLEMS_DID_YOU_SOLVE_H_

#include <iostream>

class SoHowManyProblemsDidYouSolve {
 public:
  void SetInputs() { std::cin >> n >> m >> k; }

  void Calculate() {
    min = n - m * k > 0 ? n - m * k : 0;
    max = n - m * (k - 1) - 1 > 0 ? n - m * (k - 1) - 1 : 0;
  }

  void PrintResult() { std::cout << min << " " << max; }

 private:
  long long n, m, k;
  long long min, max;
};

#ifdef BOJ_SUBMIT
int main() {
  SoHowManyProblemsDidYouSolve so_how_many_problems_did_you_solve;
  so_how_many_problems_did_you_solve.SetInputs();
  so_how_many_problems_did_you_solve.Calculate();
  so_how_many_problems_did_you_solve.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_29000_SRC_29720_SO_HOW_MANY_PROBLEMS_DID_YOU_SOLVE_H_
