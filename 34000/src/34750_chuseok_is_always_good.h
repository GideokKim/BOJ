#ifndef BOJ_34000_SRC_34750_CHUSEOK_IS_ALWAYS_GOOD_H_
#define BOJ_34000_SRC_34750_CHUSEOK_IS_ALWAYS_GOOD_H_

#include <iostream>

class ChuseokIsAlwaysGood {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    if (n < 100000) {
      parent_money = n * 0.05;
    } else if (n < 500000) {
      parent_money = n * 0.1;
    } else if (n < 1000000) {
      parent_money = n * 0.15;
    } else {
      parent_money = n * 0.2;
    }
    my_money = n - parent_money;
  }

  void PrintResult() { std::cout << parent_money << " " << my_money; }

 private:
  size_t n;
  size_t parent_money;
  size_t my_money;
};

#ifdef BOJ_SUBMIT
int main() {
  ChuseokIsAlwaysGood chuseok_is_always_good;
  chuseok_is_always_good.SetInputs();
  chuseok_is_always_good.Calculate();
  chuseok_is_always_good.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34750_CHUSEOK_IS_ALWAYS_GOOD_H_
