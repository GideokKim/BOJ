#ifndef BOJ_20000_SRC_20112_SATOR_MABANGJIN_H_
#define BOJ_20000_SRC_20112_SATOR_MABANGJIN_H_

#include <iostream>
#include <string>
#include <vector>

class SatorMabangjin {
 public:
  void SetInputs() {
    std::cin >> n;
    inputs.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    result = "YES";
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = i; j < n; ++j) {
        if (inputs[i][j] != inputs[j][i]) {
          result = "NO";
          return;
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::string> inputs;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SatorMabangjin sator_mabangjin;
  sator_mabangjin.SetInputs();
  sator_mabangjin.Calculate();
  sator_mabangjin.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_20000_SRC_20112_SATOR_MABANGJIN_H_
