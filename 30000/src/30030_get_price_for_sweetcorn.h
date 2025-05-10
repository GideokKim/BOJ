#ifndef BOJ_30000_SRC_30030_GET_PRICE_FOR_SWEETCORN_H_
#define BOJ_30000_SRC_30030_GET_PRICE_FOR_SWEETCORN_H_

#include <iostream>

class GetPriceForSweetCorn {
 public:
  void SetInputs() { std::cin >> price; }

  void Calculate() { result = price / 11 * 10; }

  void PrintResult() { std::cout << result; }

 private:
  size_t price;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  GetPriceForSweetCorn get_price_for_sweetcorn;
  get_price_for_sweetcorn.SetInputs();
  get_price_for_sweetcorn.Calculate();
  get_price_for_sweetcorn.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30030_GET_PRICE_FOR_SWEETCORN_H_
