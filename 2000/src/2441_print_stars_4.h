#ifndef BOJ_2000_SRC_2441_PRINT_STARS_4_H_
#define BOJ_2000_SRC_2441_PRINT_STARS_4_H_

#include <iostream>
#include <string>

class PrintStars4 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = 0; j < i; ++j) {
        stars += " ";
      }
      for (size_t j = i; j < n; ++j) {
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
  PrintStars4 print_stars4;
  print_stars4.SetInputs();
  print_stars4.Calculate();
  print_stars4.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2441_PRINT_STARS_4_H_
