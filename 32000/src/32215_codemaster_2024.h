#ifndef BOJ_32000_SRC_32215_CODEMASTER_2024_H_
#define BOJ_32000_SRC_32215_CODEMASTER_2024_H_

#include <iostream>

class Codemaster2024 {
 public:
  void SetInputs() { std::cin >> n >> m >> k; }

  void Calculate() { result = m * (k + 1); }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m, k;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Codemaster2024 codemaster2024;
  codemaster2024.SetInputs();
  codemaster2024.Calculate();
  codemaster2024.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32215_CODEMASTER_2024_H_
