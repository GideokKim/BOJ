#ifndef BOJ_21000_SRC_21603_K_2K_GAME_H_
#define BOJ_21000_SRC_21603_K_2K_GAME_H_

#include <iostream>
#include <vector>

class K2kGame {
 public:
  void SetInputs() { std::cin >> n >> k; }

  void Calculate() {
    long long f_k = k % 10;
    long long f_2k = (2 * k) % 10;
    for (long long num = 1; num <= n; ++num) {
      long long f_x = num % 10;
      if (f_x != f_k && f_x != f_2k) {
        results.emplace_back(num);
      }
    }
  }

  void PrintResult() {
    std::cout << results.size() << "\n";
    for (const auto& result : results) {
      std::cout << result << " ";
    }
  }

 private:
  long long n, k;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  K2kGame k2k_game;
  k2k_game.SetInputs();
  k2k_game.Calculate();
  k2k_game.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_21603_K_2K_GAME_H_
