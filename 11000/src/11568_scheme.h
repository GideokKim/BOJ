#ifndef BOJ_11000_SRC_11568_SCHEME_H_
#define BOJ_11000_SRC_11568_SCHEME_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Scheme {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    cards.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> cards[i];
    }
    dp.resize(n, 1);
  }

  void Calculate() {
    for (size_t i = 1; i < cards.size(); ++i) {
      for (size_t j = 0; j < i; ++j) {
        if (cards[j] < cards[i]) {
          dp[i] = std::max(dp[i], dp[j] + 1);
        }
      }
    }
  }

  void PrintResult() { std::cout << *std::max_element(dp.begin(), dp.end()); }

 private:
  std::vector<size_t> cards;
  std::vector<size_t> dp;
};

#ifdef BOJ_SUBMIT
int main() {
  Scheme scheme;
  scheme.SetInputs();
  scheme.Calculate();
  scheme.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11568_SCHEME_H_
