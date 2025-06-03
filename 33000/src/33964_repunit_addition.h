#ifndef BOJ_33000_SRC_33964_REPUNIT_ADDITION_H_
#define BOJ_33000_SRC_33964_REPUNIT_ADDITION_H_

#include <iostream>
#include <string>
#include <vector>

class RepunitAddition {
 public:
  void SetInputs() {
    size_t x, y;
    std::cin >> x >> y;
    repunit_x = std::stoll(std::string(x, '1'));
    repunit_y = std::stoll(std::string(y, '1'));
  }

  void Calculate() { result = repunit_x + repunit_y; }

  void PrintResult() { std::cout << result; }

 private:
  long long repunit_x, repunit_y;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  RepunitAddition repunitAddition;
  repunitAddition.SetInputs();
  repunitAddition.Calculate();
  repunitAddition.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33964_REPUNIT_ADDITION_H_
