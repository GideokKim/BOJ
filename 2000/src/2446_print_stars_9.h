#ifndef BOJ_2000_SRC_2446_PRINT_STARS_9_H_
#define BOJ_2000_SRC_2446_PRINT_STARS_9_H_

#include <iostream>
#include <string>

class PrintStars9 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (int i = n; i >= 1; --i) {
      for (int j = 0; j < n - i; ++j) {
        stars += " ";
      }
      for (int j = 1; j <= 2 * i - 1; ++j) {
        stars += "*";
      }
      stars += "\n";
    }
    for (int i = 2; i <= n; ++i) {
      int j;
      for (int j = i; j < n; ++j) {
        stars += " ";
      }
      for (j = 1; j <= 2 * i - 1; ++j) {
        stars += "*";
      }
      stars += "\n";
    }
  }

  void PrintResult() { std::cout << stars; }

 private:
  int n;
  std::string stars;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintStars9 print_stars9;
  print_stars9.SetInputs();
  print_stars9.Calculate();
  print_stars9.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2446_PRINT_STARS_9_H_
