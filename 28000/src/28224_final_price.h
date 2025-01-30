#ifndef BOJ_28000_SRC_28224_FINAL_PRICE_H_
#define BOJ_28000_SRC_28224_FINAL_PRICE_H_

#include <iostream>

class FinalPrice {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    final_price = 0;
    int price;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> price;
      final_price += price;
    }
  }

  void PrintResult() { std::cout << final_price; }

 private:
  size_t n;
  long long final_price;
};

#ifdef BOJ_SUBMIT
int main() {
  FinalPrice final_price;
  final_price.SetInputs();
  final_price.Calculate();
  final_price.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28224_FINAL_PRICE_H_
