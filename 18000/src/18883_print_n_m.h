#ifndef BOJ_18000_SRC_18883_PRINT_N_M_H_
#define BOJ_18000_SRC_18883_PRINT_N_M_H_

#include <iostream>

class PrintNM {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 1; j <= m; ++j) {
        std::cout << i * m + j;
        if (j != m) {
          std::cout << ' ';
        }
      }
      std::cout << '\n';
    }
  }

 private:
  size_t n, m;
};

#ifdef BOJ_SUBMIT
int main() {
  // 입출력 최적화를 위한 코드
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  PrintNM print_nm;
  print_nm.SetInputs();
  print_nm.Calculate();
  print_nm.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18883_PRINT_N_M_H_
