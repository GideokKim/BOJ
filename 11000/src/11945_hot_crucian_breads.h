#ifndef BOJ_11000_SRC_11945_HOT_CRUCIAN_BREADS_H_
#define BOJ_11000_SRC_11945_HOT_CRUCIAN_BREADS_H_

#include <iostream>
#include <string>
#include <vector>

class HotCrucianBreads {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    bread.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> bread[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (auto& str : bread) {
      for (int index = m - 1; index >= 0; --index) {
        std::cout << str[index];
      }
      std::cout << "\n";
    }
  }

 private:
  size_t n, m;
  std::vector<std::string> bread;
};

#ifdef BOJ_SUBMIT
int main() {
  HotCrucianBreads hot_crucian_breads;
  hot_crucian_breads.SetInputs();
  hot_crucian_breads.Calculate();
  hot_crucian_breads.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11945_HOT_CRUCIAN_BREADS_H_
