#ifndef BOJ_10000_SRC_10995_PRINT_STAR_20_H_
#define BOJ_10000_SRC_10995_PRINT_STAR_20_H_

#include <iostream>
#include <string>

class PrintStar20 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    star_line.clear();
    for (size_t i = 0; i < n; ++i) {
      star_line += "* ";
    }

    star_line.pop_back();
    star_line += "\n";
  }

  void PrintResult() {
    for (size_t i = 0; i < n; ++i) {
      if (i % 2) {
        std::cout << " ";
      }
      std::cout << star_line;
    }
  }

 private:
  size_t n;
  std::string star_line;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintStar20 print_star_20;
  print_star_20.SetInputs();
  print_star_20.Calculate();
  print_star_20.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10995_PRINT_STAR_20_H_
