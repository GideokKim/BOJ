#ifndef BOJ_1000_SRC_1065_HANSU_H_
#define BOJ_1000_SRC_1065_HANSU_H_

#include <iostream>

class Hansu {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    int count = 0;

    if (n < 100) {
      result = n;
    } else {
      for (int i = 100; i <= n; i++) {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int ones = i % 10;
        if (hundreds - tens == tens - ones) {
          count++;
        }
      }
      result = count + 99;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int n;
  int result;
};

#ifdef BOJ_SUBMIT

int main() {
  Hansu hansu;
  hansu.SetInputs();
  hansu.Calculate();
  hansu.PrintResult();

  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1065_HANSU_H_
