#ifndef BOJ_23000_SRC_23971_ZOAC_4_H_
#define BOJ_23000_SRC_23971_ZOAC_4_H_

#include <iostream>

class Zoac4 {
 public:
  void SetInputs() { std::cin >> h >> w >> n >> m; }

  void Calculate() {
    size_t row = h / (n + 1);
    row = h % (n + 1) ? row + 1 : row;
    size_t col = w / (m + 1);
    col = w % (m + 1) ? col + 1 : col;
    result = row * col;
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t h, w, n, m;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Zoac4 zoac4;
  zoac4.SetInputs();
  zoac4.Calculate();
  zoac4.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23971_ZOAC_4_H_
