#ifndef BOJ_2000_SRC_2309_SEVEN_DWARF_H_
#define BOJ_2000_SRC_2309_SEVEN_DWARF_H_

#include <algorithm>
#include <iostream>
#include <vector>

class SevenDwarf {
 public:
  void SetInputs() {
    dwarves.resize(9);
    for (size_t i = 0; i < 9; ++i) {
      std::cin >> dwarves[i];
    }
    std::sort(dwarves.begin(), dwarves.end());
  }

  void Calculate() {
    size_t total_height = 0;
    for (auto target : dwarves) {
      total_height += target;
    }

    for (size_t i = 0; i < 8; ++i) {
      for (size_t j = i; j < 9; ++j) {
        auto seven_total_height = total_height - dwarves[i] - dwarves[j];
        if (seven_total_height == 100) {
          for (size_t k = 0; k < 9; ++k) {
            if (k == i || k == j) {
              continue;
            }
            results.emplace_back(dwarves[k]);
          }
          return;
        }
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<size_t> dwarves;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SevenDwarf seven_dwarf;
  seven_dwarf.SetInputs();
  seven_dwarf.Calculate();
  seven_dwarf.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2309_SEVEN_DWARF_H_
