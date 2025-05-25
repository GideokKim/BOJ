#ifndef BOJ_1000_SRC_1365_TWISTED_LINE_H_
#define BOJ_1000_SRC_1365_TWISTED_LINE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class TwistedLine {
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
    for (const auto target : numbers) {
      auto iter = std::lower_bound(lis.begin(), lis.end(), target);
      if (iter == lis.end()) {
        lis.emplace_back(target);
      } else {
        *iter = target;
      }
    }
    result = numbers.size() - lis.size();
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> numbers;
  std::vector<long long> lis;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TwistedLine twisted_line;
  twisted_line.SetInputs();
  twisted_line.Calculate();
  twisted_line.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1365_TWISTED_LINE_H_
