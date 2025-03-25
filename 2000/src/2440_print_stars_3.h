#ifndef BOJ_2000_SRC_2440_PRINT_STARS_3_H_
#define BOJ_2000_SRC_2440_PRINT_STARS_3_H_

#include <iostream>
#include <string>

class PrintStars3 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    stars = "";
    for (int i = n; i > 0; i--) {
      for (int j = 0; j < i; j++) {
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
  PrintStars3 print_stars3;
  print_stars3.SetInputs();
  print_stars3.Calculate();
  print_stars3.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2440_PRINT_STARS_3_H_
