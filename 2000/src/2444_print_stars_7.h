#ifndef BOJ_2000_SRC_2444_PRINT_STARS_7_H_
#define BOJ_2000_SRC_2444_PRINT_STARS_7_H_

#include <iostream>
#include <string>

class PrintStars7 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (int i = 1; i <= n; i++) {
      stars += std::string(n - i, ' ');
      stars += std::string(2 * i - 1, '*');
      stars += "\n";
    }
    for (int i = n - 1; i >= 1; i--) {
      stars += std::string(n - i, ' ');
      stars += std::string(2 * i - 1, '*');
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
  PrintStars7 print_stars7;
  print_stars7.SetInputs();
  print_stars7.Calculate();
  print_stars7.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2444_PRINT_STARS_7_H_
