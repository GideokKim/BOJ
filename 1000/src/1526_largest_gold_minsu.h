#ifndef BOJ_1000_SRC_1526_LARGEST_GOLD_MINSU_H_
#define BOJ_1000_SRC_1526_LARGEST_GOLD_MINSU_H_

#include <iostream>

class LargestGoldMinsu {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = n;
    size_t number = result;
    while (true) {
      number = result;
      while (true) {
        size_t target = number % 10;
        if (number != 0 && (target == 4 || target == 7)) {
          number /= 10;
        } else {
          if (number == 0) {
            return;
          } else {
            --result;
            break;
          }
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  LargestGoldMinsu largest_gold_minsu;
  largest_gold_minsu.SetInputs();
  largest_gold_minsu.Calculate();
  largest_gold_minsu.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1526_LARGEST_GOLD_MINSU_H_