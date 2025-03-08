#ifndef BOJ_2000_SRC_2439_PRINT_STARS_2_H_
#define BOJ_2000_SRC_2439_PRINT_STARS_2_H_

#include <iostream>

class PrintStars2 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < n; j++) {
        if (i + j >= n) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
      }
      std::cout << "\n";
    }
  }

 private:
  int n;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintStars2 print_stars2;
  print_stars2.SetInputs();
  print_stars2.Calculate();
  print_stars2.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2439_PRINT_STARS_2_H_
