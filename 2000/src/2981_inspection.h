#ifndef BOJ_2000_SRC_2981_INSPECTION_H_
#define BOJ_2000_SRC_2981_INSPECTION_H_

#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <vector>

class Inspection {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> numbers[i];
    }
    std::sort(numbers.begin(), numbers.end());
  }

  void Calculate() {
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
      unsigned long long diff = numbers[i + 1] - numbers[i];
      multiples.insert(diff);
    }

    auto gcd = *multiples.begin();
    for (auto multiple : multiples) {
      gcd = std::gcd(gcd, multiple);
    }

    results.insert(gcd);
    for (unsigned long long divisor = 2; divisor * divisor <= gcd; ++divisor) {
      if (gcd % divisor == 0) {
        results.insert(divisor);
        results.insert(gcd / divisor);
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << ' ';
    }
  }

 private:
  std::vector<unsigned long long> numbers;
  std::set<unsigned long long> multiples;
  std::set<unsigned long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Inspection inspection;
  inspection.SetInputs();
  inspection.Calculate();
  inspection.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2981_INSPECTION_H_
