#ifndef BOJ_2000_SRC_2741_PRINT_N_H_
#define BOJ_2000_SRC_2741_PRINT_N_H_

#include <iostream>

class PrintN {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();
  }

  void Calculate() {}

  void PrintResult() {
    for (int i = n; i >= 1; i--) {
      std::cout << i << '\n';
    }
  }

 private:
  int n;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  PrintN print_n;
  print_n.SetInputs();
  print_n.Calculate();
  print_n.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2741_PRINT_N_H_
