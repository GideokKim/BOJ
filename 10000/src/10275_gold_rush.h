#ifndef BOJ_10000_SRC_10275_GOLD_RUSH_H_
#define BOJ_10000_SRC_10275_GOLD_RUSH_H_

#include <iostream>
#include <vector>

class GoldRush {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    test_cases.resize(t);

    std::vector<long long> target;
    for (auto& test_case : test_cases) {
      target.resize(3, 0);
      std::cin >> target[0] >> target[1] >> target[2];
      if (target[1] > target[2]) {
        long long temp = target[1];
        target[1] = target[2];
        target[2] = temp;
      }
      test_case = target;
    }
  }

  void Calculate() {
    for (auto& test_case : test_cases) {
      long long n = test_case[0];
      long long a = test_case[1];

      long long count = 0;
      while (a % 2 == 0) {
        count++;
        a /= 2;
      }
      results.emplace_back(n - count);
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::vector<long long>> test_cases;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  GoldRush gold_rush;
  gold_rush.SetInputs();
  gold_rush.Calculate();
  gold_rush.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10275_GOLD_RUSH_H_
