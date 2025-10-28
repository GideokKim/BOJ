#ifndef BOJ_2000_SRC_2523_PRINT_STARS_13_H_
#define BOJ_2000_SRC_2523_PRINT_STARS_13_H_

#include <iostream>
#include <string>

class PrintStars13 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = "";
    for (int i = 1; i <= n; ++i) {
      for (int j = 0; j < i; ++j) {
        result += "*";
      }
      result += "\n";
    }
    for (int i = n - 1; i > 0; --i) {
      for (int j = 0; j < i; ++j) {
        result += "*";
      }
      result += "\n";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintStars13 print_stars13;
  print_stars13.SetInputs();
  print_stars13.Calculate();
  print_stars13.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2523_PRINT_STARS_13_H_
