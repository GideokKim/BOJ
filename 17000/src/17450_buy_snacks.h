#ifndef BOJ_17000_SRC_17450_BUY_SNACKS_H_
#define BOJ_17000_SRC_17450_BUY_SNACKS_H_

#include <iostream>
#include <string>
#include <vector>

class BuySnacks {
 public:
  void SetInputs() {
    prices.resize(3);
    weights.resize(3);

    for (size_t i = 0; i < 3; ++i) {
      std::cin >> prices[i] >> weights[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < 3; ++i) {
      prices[i] *= 10;
      prices[i] = prices[i] >= 5000 ? prices[i] - 500 : prices[i];
      weights[i] *= 10;
    }

    for (size_t i = 0; i < 3; ++i) {
      weights[i] *= prices[(i + 1) % 3] * prices[(i + 2) % 3];
    }

    result = weights[0] > weights[1] ? "S" : "N";
    long long max = weights[0] > weights[1] ? weights[0] : weights[1];
    result = max > weights[2] ? result : "U";
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> prices;
  std::vector<long long> weights;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  BuySnacks buy_snacks;
  buy_snacks.SetInputs();
  buy_snacks.Calculate();
  buy_snacks.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17450_BUY_SNACKS_H_
