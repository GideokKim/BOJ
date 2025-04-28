#ifndef BOJ_23000_SRC_23825_LET_S_MAKE_SASA_H_
#define BOJ_23000_SRC_23825_LET_S_MAKE_SASA_H_

#include <iostream>

class LetMakeSasa {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() { result = (n < m ? n : m) / 2; }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  LetMakeSasa let_make_sasa;
  let_make_sasa.SetInputs();
  let_make_sasa.Calculate();
  let_make_sasa.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23825_LET_S_MAKE_SASA_H_
