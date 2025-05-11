#ifndef BOJ_2000_SRC_2352_DESIGN_SEMICONDUCTORS_H_
#define BOJ_2000_SRC_2352_DESIGN_SEMICONDUCTORS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class DesignSemiconductors {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    lis.push_back(numbers[0]);
    for (size_t i = 1; i < numbers.size(); ++i) {
      if (lis.back() < numbers[i]) {
        lis.push_back(numbers[i]);
      } else if (lis.back() > numbers[i]) {
        auto iter = std::lower_bound(lis.begin(), lis.end(), numbers[i]);
        *iter = numbers[i];
      }
    }
  }

  void PrintResult() { std::cout << lis.size(); }

 private:
  std::vector<size_t> numbers;
  std::vector<size_t> lis;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  DesignSemiconductors design_semiconductors;
  design_semiconductors.SetInputs();
  design_semiconductors.Calculate();
  design_semiconductors.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2352_DESIGN_SEMICONDUCTORS_H_
