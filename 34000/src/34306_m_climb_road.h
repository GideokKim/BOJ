#ifndef BOJ_34000_SRC_34306_M_CLIMB_ROAD_H_
#define BOJ_34000_SRC_34306_M_CLIMB_ROAD_H_

#include <iostream>

class MClimbRoad {
 public:
  void SetInputs() { std::cin >> w >> n; }

  void Calculate() {
    long long feet = w * 5280;
    result = feet / n;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long w, n;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  MClimbRoad mClimbRoad;
  mClimbRoad.SetInputs();
  mClimbRoad.Calculate();
  mClimbRoad.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34306_M_CLIMB_ROAD_H_
