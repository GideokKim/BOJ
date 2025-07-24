#ifndef BOJ_21000_SRC_22938_GOOD_SHOOTER_H_
#define BOJ_21000_SRC_22938_GOOD_SHOOTER_H_

#include <iostream>

class GoodShooter {
 public:
  void SetInputs() {
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
  }

  void Calculate() { 
    long long distance_square = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    long long criteria = (r1 + r2) * (r1 + r2);
    if (distance_square >= criteria) {
      result = "NO";
    } else {
      result = "YES";
    }
   }

  void PrintResult() { std::cout << result; }

 private:
  long long x1, x2, y1, y2, r1, r2;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  GoodShooter good_shooter;
  good_shooter.SetInputs();
  good_shooter.Calculate();
  good_shooter.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_21000_SRC_22938_GOOD_SHOOTER_H_
