#ifndef BOJ_5000_SRC_5585_COIN_H_
#define BOJ_5000_SRC_5585_COIN_H_

#include <iostream>

class Coin {
 public:
  void SetInputs() { std::cin >> price; }

  void Calculate() {
    price = 1000 - price;
    result = price / 500;
    price %= 500;

    result += price / 100;
    price %= 100;

    result += price / 50;
    price %= 50;

    result += price / 10;
    price %= 10;

    result += price / 5;
    price %= 5;

    result += price;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long price;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Coin coin;
  coin.SetInputs();
  coin.Calculate();
  coin.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5585_COIN_H_
