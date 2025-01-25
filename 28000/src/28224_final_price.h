#ifndef BOJ_28000_SRC_28224_FINAL_PRICE_H_
#define BOJ_28000_SRC_28224_FINAL_PRICE_H_

#include <iostream>

class FinalPrice {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    final_price = 0;
    int price;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> price;
      final_price += price;
    }
  }

  void PrintResult() { std::cout << final_price; }

 private:
  long long final_price;
};

#ifdef BOJ_SUBMIT
int main() {
  FinalPrice final_price;
  final_price.SetInputs();
  final_price.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28224_FINAL_PRICE_H_
