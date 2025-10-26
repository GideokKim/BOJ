#ifndef BOJ_2000_SRC_2522_PRINT_STARS_12_H_
#define BOJ_2000_SRC_2522_PRINT_STARS_12_H_

#include <iostream>
#include <string>

class PrintStars12 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = "";
    for (int i = 1; i <= n; ++i) {
      for (int j = 0; j < n - i; ++j) {
        result += " ";
      }
      for (int j = 0; j < i; ++j) {
        result += "*";
      }
      result += "\n";
    }
    for (int i = n - 1; i > 0; --i) {
      for (int j = 0; j < n - i; ++j) {
        result += " ";
      }
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
  PrintStars12 print_stars12;
  print_stars12.SetInputs();
  print_stars12.Calculate();
  print_stars12.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2522_PRINT_STARS_12_H_
