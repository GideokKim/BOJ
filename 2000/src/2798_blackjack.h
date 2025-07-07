#ifndef BOJ_2000_SRC_2798_BLACKJACK_H_
#define BOJ_2000_SRC_2798_BLACKJACK_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Blackjack {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    cards.resize(n, 0);
    for (auto& card : cards) {
      std::cin >> card;
    }
  }

  void Calculate() {
    result = 0;
    size_t sum = 0;
    std::sort(cards.begin(), cards.end());
    for (size_t i = 0; i < n; ++i) {
      for (size_t j = i + 1; j < n; ++j) {
        for (size_t k = j + 1; k < n; ++k) {
          sum = cards[i] + cards[j] + cards[k];
          if (sum <= m) {
            result = std::max(sum, result);
          } else {
            break;
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::vector<int> cards;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  Blackjack blackjack;
  blackjack.SetInputs();
  blackjack.Calculate();
  blackjack.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2798_BLACKJACK_H_
