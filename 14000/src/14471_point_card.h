#ifndef BOJ_14000_SRC_14471_POINT_CARD_H_
#define BOJ_14000_SRC_14471_POINT_CARD_H_

#include <algorithm>
#include <iostream>
#include <vector>

class PointCard {
 public:
  void SetInputs() {
    std::cin >> n >> m;
    cards.resize(m);

    for (auto& card : cards) {
      long long failed;
      std::cin >> card >> failed;
      card -= failed;
    }

    std::sort(cards.rbegin(), cards.rend());
  }

  void Calculate() {
    result = 0;
    long long number_of_gifts = 0;
    for (auto card : cards) {
      if (card < 0) {
        if (number_of_gifts < m - 1) {
          result -= card;
        }
      }
      ++number_of_gifts;
    }
    result >>= 1;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, m;
  std::vector<long long> cards;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  PointCard point_card;
  point_card.SetInputs();
  point_card.Calculate();
  point_card.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14471_POINT_CARD_H_
