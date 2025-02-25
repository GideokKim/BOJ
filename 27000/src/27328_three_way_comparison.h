#ifndef BOJ_27000_SRC_27328_THREE_WAY_COMPARISON_H_
#define BOJ_27000_SRC_27328_THREE_WAY_COMPARISON_H_

#include <iostream>

class ThreeWayComparison {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    if (a == b) {
      result = 0;
    } else if (a > b) {
      result = 1;
    } else {
      result = -1;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  int a, b;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThreeWayComparison three_way_comparison;
  three_way_comparison.SetInputs();
  three_way_comparison.Calculate();
  three_way_comparison.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27328_THREE_WAY_COMPARISON_H_
