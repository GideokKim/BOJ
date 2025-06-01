#ifndef BOJ_3000_SRC_3009_4TH_DOT_H_
#define BOJ_3000_SRC_3009_4TH_DOT_H_

#include <algorithm>
#include <iostream>
#include <vector>

class FourthDot {
 public:
  void SetInputs() {
    x_coordinate.resize(3);
    y_coordinate.resize(3);

    for (size_t i = 0; i < 3; ++i) {
      std::cin >> x_coordinate[i] >> y_coordinate[i];
    }
  }

  void Calculate() {
    std::sort(x_coordinate.begin(), x_coordinate.end());
    std::sort(y_coordinate.begin(), y_coordinate.end());
    x_result =
        x_coordinate[1] == x_coordinate[0] ? x_coordinate[2] : x_coordinate[0];
    y_result =
        y_coordinate[1] == y_coordinate[0] ? y_coordinate[2] : y_coordinate[0];
  }

  void PrintResult() { std::cout << x_result << " " << y_result; }

 private:
  std::vector<int> x_coordinate;
  std::vector<int> y_coordinate;
  int x_result, y_result;
};

#ifdef BOJ_SUBMIT
int main() {
  FourthDot fourth_dot;
  fourth_dot.SetInputs();
  fourth_dot.Calculate();
  fourth_dot.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3009_4TH_DOT_H_
