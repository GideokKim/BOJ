#ifndef BOJ_2000_SRC_2443_PRINT_STARS_6_H_
#define BOJ_2000_SRC_2443_PRINT_STARS_6_H_

#include <iostream>
#include <string>

class PrintStars6 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (size_t i = n; i >= 1; --i) {
      for (size_t j = 0; j < n - i; ++j) {
        stars += " ";
      }
      for (size_t j = 0; j < 2 * i - 1; ++j) {
        stars += "*";
      }
      stars += "\n";
    }
  }

  void PrintResult() { std::cout << stars; }

 private:
  size_t n;
  std::string stars;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintStars6 print_stars6;
  print_stars6.SetInputs();
  print_stars6.Calculate();
  print_stars6.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2443_PRINT_STARS_6_H_
