#ifndef BOJ_2000_SRC_2445_PRINT_STARS_8_H_
#define BOJ_2000_SRC_2445_PRINT_STARS_8_H_

#include <iostream>
#include <string>

class PrintStars8 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (int i = 1; i <= n; i++) {
      int j;
      for (j = 1; j <= i; j++) {
        stars += "*";
      }
      for (j = 1; j <= 2 * (n - i); j++) {
        stars += " ";
      }
      for (j = 1; j <= i; j++) {
        stars += "*";
      }
      stars += "\n";
    }
    for (int i = n - 1; i >= 1; i--) {
      int j;
      for (j = 1; j <= i; j++) {
        stars += "*";
      }
      for (j = 1; j <= 2 * (n - i); j++) {
        stars += " ";
      }
      for (j = 1; j <= i; j++) {
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
  PrintStars8 print_stars8;
  print_stars8.SetInputs();
  print_stars8.Calculate();
  print_stars8.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2445_PRINT_STARS_8_H_
