#ifndef BOJ_25000_SRC_25305_CUTLINE_H_
#define BOJ_25000_SRC_25305_CUTLINE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Cutline {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    scores.resize(n, 0);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> scores[i];
    }
  }

  void Calculate() {
    std::sort(scores.rbegin(), scores.rend());
    result = scores[k - 1];
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  std::vector<size_t> scores;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Cutline cutline;
  cutline.SetInputs();
  cutline.Calculate();
  cutline.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25305_CUTLINE_H_