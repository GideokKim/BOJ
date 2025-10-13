#ifndef BOJ_2000_SRC_2442_PRINT_STARS_5_H_
#define BOJ_2000_SRC_2442_PRINT_STARS_5_H_

#include <iostream>
#include <string>

class PrintStars5 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (size_t i = 1; i <= n; ++i) {
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
  PrintStars5 print_stars5;
  print_stars5.SetInputs();
  print_stars5.Calculate();
  print_stars5.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2442_PRINT_STARS_5_H_
