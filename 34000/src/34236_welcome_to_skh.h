#ifndef BOJ_34000_SRC_34236_WELCOME_TO_SKH_H_
#define BOJ_34000_SRC_34236_WELCOME_TO_SKH_H_

#include <iostream>
#include <vector>

class WelcomeToSKH {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    years.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> years[i];
    }
  }

  void Calculate() { result = years.back() + years[1] - years[0]; }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> years;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  WelcomeToSKH welcome_to_skh;
  welcome_to_skh.SetInputs();
  welcome_to_skh.Calculate();
  welcome_to_skh.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34236_WELCOME_TO_SKH_H_
