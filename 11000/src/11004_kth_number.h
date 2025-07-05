#ifndef BOJ_11000_SRC_11004_KTH_NUMBER_H_
#define BOJ_11000_SRC_11004_KTH_NUMBER_H_

#include <algorithm>
#include <iostream>
#include <vector>

class KthNumber {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    numbers.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
  };

  void Calculate() {
    std::sort(numbers.begin(), numbers.end());
    result = numbers[k - 1];
  }

  void PrintResult() { std::cout << result; };

 private:
  size_t n, k;
  std::vector<long long> numbers;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  KthNumber kth_number;
  kth_number.SetInputs();
  kth_number.Calculate();
  kth_number.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11004_KTH_NUMBER_H_
