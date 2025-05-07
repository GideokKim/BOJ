#ifndef BOJ_12000_SRC_12015_LIS_2_H_
#define BOJ_12000_SRC_12015_LIS_2_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Lis2 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    std::cin.ignore();
    numbers.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    lis.push_back(numbers[0]);
    for (size_t index = 1; index < numbers.size(); ++index) {
      if (numbers[index] > lis.back()) {
        lis.push_back(numbers[index]);
      } else if (numbers[index] < lis.back()) {
        auto it = std::lower_bound(lis.begin(), lis.end(), numbers[index]);
        *it = numbers[index];
      }
    }
  }

  void PrintResult() { std::cout << lis.size(); }

 private:
  std::vector<int> numbers;
  std::vector<int> lis;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::cout.tie(0);

  Lis2 lis2;
  lis2.SetInputs();
  lis2.Calculate();
  lis2.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_12000_SRC_12015_LIS_2_H_
