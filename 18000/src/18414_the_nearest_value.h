#ifndef BOJ_18000_SRC_18414_THE_NEAREST_VALUE_H_
#define BOJ_18000_SRC_18414_THE_NEAREST_VALUE_H_

#include <iostream>

class TheNearestValue {
 public:
  void SetInputs() { std::cin >> x >> l >> r; }

  void Calculate() {
    result = x;

    if (x > r) {
      result = r;
    } else if (x < l) {
      result = l;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int x, l, r;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  TheNearestValue the_nearest_value;
  the_nearest_value.SetInputs();
  the_nearest_value.Calculate();
  the_nearest_value.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18414_THE_NEAREST_VALUE_H_
