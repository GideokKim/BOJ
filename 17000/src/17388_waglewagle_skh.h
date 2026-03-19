#ifndef BOJ_17000_SRC_17388_WAGLEWAGLE_SKH_H_
#define BOJ_17000_SRC_17388_WAGLEWAGLE_SKH_H_

#include <iostream>
#include <string>

class WagleWagle {
 public:
  void SetInputs() { std::cin >> s >> k >> h; }

  void Calculate() {
    result = "OK";

    if (s + k + h >= 100) {
      return;
    }

    if (s < k && s < h) {
      result = "Soongsil";
    } else if (k < s && k < h) {
      result = "Korea";
    } else if (h < s && h < k) {
      result = "Hanyang";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int s, k, h;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  WagleWagle wagle_wagle;
  wagle_wagle.SetInputs();
  wagle_wagle.Calculate();
  wagle_wagle.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17388_WAGLEWAGLE_SKH_H_