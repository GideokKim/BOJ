#ifndef BOJ_26000_SRC_26546_REVERSE_H_
#define BOJ_26000_SRC_26546_REVERSE_H_

#include <iostream>
#include <string>
#include <vector>

class Reverse {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    targets.resize(n);
    ranges.resize(n);
    results.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> targets[i];
      std::cin >> ranges[i].first >> ranges[i].second;
    }
  }

  void Calculate() {
    for (size_t i = 0; i < results.size(); ++i) {
      results[i] = targets[i].substr(0, ranges[i].first) +
                   targets[i].substr(ranges[i].second);
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::string> targets;
  std::vector<std::pair<size_t, size_t>> ranges;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Reverse reverse;
  reverse.SetInputs();
  reverse.Calculate();
  reverse.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26546_REVERSE_H_
