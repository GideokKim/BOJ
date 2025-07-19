#ifndef BOJ_27000_SRC_27964_QUATRO_CHEESE_PIZZA_H_
#define BOJ_27000_SRC_27964_QUATRO_CHEESE_PIZZA_H_

#include <iostream>
#include <set>
#include <string>

class QuatroCheesePizza {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;

    std::string input;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> input;
      inputs.insert(input);
    }
  }

  void Calculate() {
    int count = 0;
    for (auto& target : inputs) {
      if (target.find("Cheese") != std::string::npos) {
        if (target.substr(target.size() - 6) == "Cheese") {
          ++count;
        }
      }
    }

    if (count >= 4) {
      result = "yummy";
    } else {
      result = "sad";
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  std::set<std::string> inputs;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  QuatroCheesePizza quatro_cheese_pizza;
  quatro_cheese_pizza.SetInputs();
  quatro_cheese_pizza.Calculate();
  quatro_cheese_pizza.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27964_QUATRO_CHEESE_PIZZA_H_
