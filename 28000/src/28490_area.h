#ifndef BOJ_28000_SRC_28490_AREA_H_
#define BOJ_28000_SRC_28490_AREA_H_

#include <iostream>
#include <vector>

class Area {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    heights.resize(n);
    widths.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> heights[i] >> widths[i];
    }
  }

  void Calculate() {
    result = 0;

    size_t area;
    for (size_t i = 0; i < heights.size(); ++i) {
      area = heights[i] * widths[i];
      result = result > area ? result : area;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> heights;
  std::vector<size_t> widths;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Area area;
  area.SetInputs();
  area.Calculate();
  area.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28490_AREA_H_
