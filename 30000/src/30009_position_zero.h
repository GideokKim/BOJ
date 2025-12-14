#ifndef BOJ_30000_SRC_30009_POSITION_ZERO_H_
#define BOJ_30000_SRC_30009_POSITION_ZERO_H_

#include <iostream>
#include <vector>

class PositionZero {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    lines.resize(n, 0);
    std::cin >> x >> y >> r;

    for (size_t i = 0; i < n; ++i) {
      std::cin >> lines[i];
    }
  }

  void Calculate() {
    long long start = x - r;
    long long end = x + r;
    a = 0;
    b = 0;

    for (auto line : lines) {
      if (line == start || line == end) {
        ++b;
      } else if (start < line && line < end) {
        ++a;
      }
    }
  }

  void PrintResult() { std::cout << a << ' ' << b; }

 private:
  long long x, y, r;
  std::vector<long long> lines;
  long long a, b;
};

#ifdef BOJ_SUBMIT
int main() {
  PositionZero position_zero;
  position_zero.SetInputs();
  position_zero.Calculate();
  position_zero.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30009_POSITION_ZERO_H_
