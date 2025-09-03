#ifndef BOJ_32000_SRC_32141_CARD_GAME_EASY_H_
#define BOJ_32000_SRC_32141_CARD_GAME_EASY_H_

#include <iostream>
#include <string>
#include <vector>

class CardGameEasy {
 public:
  void SetInputs() {
    std::cin >> n >> h;
    damages.resize(n);

    for (auto& target : damages) {
      std::cin >> target;
    }
  }

  void Calculate() {
    result = 0;

    long long count = 0;

    for (const auto target : damages) {
      count += target;
      ++result;

      if (count >= h) {
        return;
      }
    }

    result = -1;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, h;
  std::vector<long long> damages;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  CardGameEasy card_game_easy;
  card_game_easy.SetInputs();
  card_game_easy.Calculate();
  card_game_easy.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32141_CARD_GAME_EASY_H_
