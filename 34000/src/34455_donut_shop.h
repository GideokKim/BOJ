#ifndef BOJ_34000_SRC_34455_DONUT_SHOP_H_
#define BOJ_34000_SRC_34455_DONUT_SHOP_H_

#include <iostream>
#include <string>
#include <vector>

class DonutShop {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> result >> n;
    inputs.resize(2 * n);

    for (size_t i = 0; i < inputs.size(); ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < inputs.size(); i += 2) {
      size_t donuts = std::stoull(inputs[i + 1]);
      if (inputs[i] == "+") {
        result += donuts;
      } else {
        result -= donuts;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  DonutShop donutShop;
  donutShop.SetInputs();
  donutShop.Calculate();
  donutShop.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34455_DONUT_SHOP_H_
