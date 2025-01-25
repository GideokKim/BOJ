#ifndef BOJ_26000_SRC_26517_CONTINUOUS_H_
#define BOJ_26000_SRC_26517_CONTINUOUS_H_

#include <iostream>
#include <string>

class Continuous {
 public:
  void SetInputs() { std::cin >> k >> a >> b >> c >> d; }

  void Calculate() {
    long long left = a * k + b;
    long long right = c * k + d;
    if (left == right) {
      result = "Yes " + std::to_string(left);
    } else {
      result = "No";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long k, a, b, c, d;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Continuous continuous;
  continuous.SetInputs();
  continuous.Calculate();
  continuous.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26517_CONTINUOUS_H_
