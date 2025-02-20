#ifndef BOJ_5000_SRC_5341_PYRAMIDS_H_
#define BOJ_5000_SRC_5341_PYRAMIDS_H_

#include <iostream>
#include <vector>

class Pyramids {
 public:
  void SetInputs() {
    long long n;
    while (std::cin >> n && n != 0) {
      numbers.push_back(n);
    }
  }

  void Calculate() {
    results.resize(numbers.size());
    for (size_t i = 0; i < numbers.size(); ++i) {
      results[i] = numbers[i] * (numbers[i] + 1) / 2;
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  std::vector<long long> numbers;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Pyramids pyramids;
  pyramids.SetInputs();
  pyramids.Calculate();
  pyramids.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5341_PYRAMIDS_H_
