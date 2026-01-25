#ifndef BOJ_34000_SRC_34446_E_DAYS_ORE_CART_PULL_H_
#define BOJ_34000_SRC_34446_E_DAYS_ORE_CART_PULL_H_

#include <iostream>

class EDaysOreCartPull {
 public:
  void SetInputs() { std::cin >> m >> n >> t; }

  void Calculate() { result = 2 * m; }

  void PrintResult() { std::cout << result; }

 private:
  size_t m, n, t;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  EDaysOreCartPull eDaysOreCartPull;
  eDaysOreCartPull.SetInputs();
  eDaysOreCartPull.Calculate();
  eDaysOreCartPull.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34446_E_DAYS_ORE_CART_PULL_H_
