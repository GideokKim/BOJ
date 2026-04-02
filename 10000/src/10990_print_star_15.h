#ifndef BOJ_10000_SRC_10990_PRINT_STAR_15_H_
#define BOJ_10000_SRC_10990_PRINT_STAR_15_H_

#include <iostream>
#include <string>

class PrintStar15 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    star_line.clear();
    for (size_t line = 1; line <= n; ++line) {
      for (size_t i = 0; i < n - line; ++i) {
        star_line += " ";
      }
      star_line += "*";
      if (line != 1) {
        for (size_t i = 0; i < 2 * line - 3; ++i) {
          star_line += " ";
        }
        star_line += "*";
      }

      star_line += "\n";
    }
  }

  void PrintResult() { std::cout << star_line; }

 private:
  size_t n;
  std::string star_line;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintStar15 print_star_15;
  print_star_15.SetInputs();
  print_star_15.Calculate();
  print_star_15.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10990_PRINT_STAR_15_H_
