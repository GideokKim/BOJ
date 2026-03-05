#ifndef BOJ_15000_SRC_15780_IS_MULTI_TAP_ENOUGH_H_
#define BOJ_15000_SRC_15780_IS_MULTI_TAP_ENOUGH_H_

#include <iostream>
#include <string>
#include <vector>

class IsMultiTapEnough {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    multi_taps.resize(k);
    for (auto& multi_tap : multi_taps) {
      std::cin >> multi_tap;
    }
  }

  void Calculate() {
    result = "NO";
    long long count = static_cast<long long>(n);
    for (auto multi_tap : multi_taps) {
      count -= multi_tap >> 1;
      if (multi_tap & 1) {
        --count;
      }
    }

    if (count <= 0) {
      result = "YES";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, k;
  std::vector<long long> multi_taps;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  IsMultiTapEnough is_multi_tap_enough;
  is_multi_tap_enough.SetInputs();
  is_multi_tap_enough.Calculate();
  is_multi_tap_enough.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15780_IS_MULTI_TAP_ENOUGH_H_
