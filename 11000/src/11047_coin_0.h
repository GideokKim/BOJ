#ifndef BOJ_11000_SRC_11047_COIN_0_H_
#define BOJ_11000_SRC_11047_COIN_0_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Coin0 {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> k;
    coins.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> coins[i];
    }
    std::sort(coins.rbegin(), coins.rend());
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < coins.size(); ++i) {
      if (k >= coins[i]) {
        result += static_cast<long long>(k / coins[i]);
        k %= coins[i];
      }
    }
  }

  void PrintResult() { std::cout << result; };

 private:
  long long k;
  std::vector<long long> coins;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Coin0 coin_0;
  coin_0.SetInputs();
  coin_0.Calculate();
  coin_0.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11047_COIN_0_H_
