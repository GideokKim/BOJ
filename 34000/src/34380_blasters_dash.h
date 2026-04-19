#ifndef BOJ_34000_SRC_34380_BLASTERS_DASH_H_
#define BOJ_34000_SRC_34380_BLASTERS_DASH_H_

#include <iostream>

class BlastersDash {
 public:
  void SetInputs() {
    size_t m, v, k;
    std::cin >> m >> v >> n >> k;
  }

  void Calculate() { result = 2 * (n + 20); }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  BlastersDash blasters_dash;
  blasters_dash.SetInputs();
  blasters_dash.Calculate();
  blasters_dash.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34380_BLASTERS_DASH_H_
