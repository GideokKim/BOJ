#ifndef BOJ_26000_SRC_26068_CHICKEN_GIFITCON_H_
#define BOJ_26000_SRC_26068_CHICKEN_GIFITCON_H_

#include <iostream>
#include <string>
#include <vector>

class ChickenGifticon {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    inputs.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    result = 0;
    for (auto input : inputs) {
      int day = std::stoi(input.substr(2));
      if (day <= 90) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  ChickenGifticon chicken_gifticon;
  chicken_gifticon.SetInputs();
  chicken_gifticon.Calculate();
  chicken_gifticon.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26068_CHICKEN_GIFITCON_H_
