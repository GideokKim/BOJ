#ifndef BOJ_5000_SRC_5347_LCM_H_
#define BOJ_5000_SRC_5347_LCM_H_

#include <iostream>
#include <numeric>
#include <vector>

class Lcm {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    long long a, b;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> a >> b;
      results.push_back(std::lcm(a, b));
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  size_t n;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Lcm lcm;
  lcm.SetInputs();
  lcm.Calculate();
  lcm.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5347_LCM_H_
