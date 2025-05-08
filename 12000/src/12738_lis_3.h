#ifndef BOJ_12000_SRC_12738_LIS_3_H_
#define BOJ_12000_SRC_12738_LIS_3_H_

#include <algorithm>
#include <iostream>
#include <vector>

class LIS3 {
 public:
  void SetInputs() {
    std::cin >> n;
    numbers.resize(n, 0);
    for (size_t index = 0; index < n; ++index) {
      std::cin >> numbers[index];
    }
  }

  void Calculate() {
    lis.reserve(n);
    lis.push_back(numbers[0]);
    for (size_t i = 1; i < n; ++i) {
      if (lis.back() < numbers[i]) {
        lis.push_back(numbers[i]);
      } else if (lis.back() > numbers[i]) {
        auto it = std::lower_bound(lis.begin(), lis.end(), numbers[i]);
        *it = numbers[i];
      }
    }
  }

  void PrintResult() { std::cout << lis.size(); }

 private:
  size_t n;
  std::vector<long long> numbers;
  std::vector<long long> lis;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  LIS3 lis3;
  lis3.SetInputs();
  lis3.Calculate();
  lis3.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_12000_SRC_12738_LIS_3_H_
