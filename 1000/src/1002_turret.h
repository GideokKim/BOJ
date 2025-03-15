#ifndef BOJ_1000_SRC_1002_TURRET_H_
#define BOJ_1000_SRC_1002_TURRET_H_

#include <cmath>
#include <iostream>
#include <vector>

class Turret {
 public:
  void SetInputs() { std::cin >> number_of_test_cases; }

  void Calculate() {
    for (size_t i = 0; i < number_of_test_cases; ++i) {
      std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
      int r1_square = r1 * r1;
      int r2_square = r2 * r2;
      int r3_square = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
      double r3 = sqrt(r3_square);

      if (x1 == x2 && y1 == y2 && r1 == r2) {
        results.push_back(-1);
      } else if (r3_square > (r1 + r2) * (r1 + r2) ||
                 r3_square < (r1 - r2) * (r1 - r2)) {
        results.push_back(0);
      } else if (r3_square == (r1 + r2) * (r1 + r2)) {
        results.push_back(1);
      } else if ((r3 + static_cast<double>(r1)) *
                     (r3 + static_cast<double>(r1)) ==
                 static_cast<double>(r2_square)) {
        results.push_back(1);
      } else if ((r3 + static_cast<double>(r2)) *
                     (r3 + static_cast<double>(r2)) ==
                 static_cast<double>(r1_square)) {
        results.push_back(1);
      } else {
        results.push_back(2);
      }
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << std::endl;
    }
  }

 private:
  size_t number_of_test_cases;
  int x1, y1, r1, x2, y2, r2;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Turret turret;
  turret.SetInputs();
  turret.Calculate();
  turret.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1002_TURRET_H_
