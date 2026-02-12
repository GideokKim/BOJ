#ifndef BOJ_25000_SRC_25377_BREAD_H_
#define BOJ_25000_SRC_25377_BREAD_H_

#include <iostream>
#include <vector>

class Bread {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    bakeries.resize(n, std::pair<long long, long long>(0, 0));
    for (size_t i = 0; i < n; ++i) {
      std::cin >> bakeries[i].first >> bakeries[i].second;
    }
  }

  void Calculate() {
    result = -1;
    for (auto target : bakeries) {
      if (target.first <= target.second) {
        if (result < 0) {
          result = target.second;
        } else {
          result = result < target.second ? result : target.second;
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::pair<long long, long long>> bakeries;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Bread bread;
  bread.SetInputs();
  bread.Calculate();
  bread.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25377_BREAD_H_