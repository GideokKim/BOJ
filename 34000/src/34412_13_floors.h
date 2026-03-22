#ifndef BOJ_34000_SRC_34412_THIRTEEN_FLOORS_H_
#define BOJ_34000_SRC_34412_THIRTEEN_FLOORS_H_

#include <iostream>

class ThirteenFloors {
 public:
  void SetInputs() { std::cin >> x; }

  void Calculate() { result = x < 13 ? x : x + 1; }

  void PrintResult() { std::cout << result; }

 private:
  long long x;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ThirteenFloors thirteen_floors;
  thirteen_floors.SetInputs();
  thirteen_floors.Calculate();
  thirteen_floors.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34412_THIRTEEN_FLOORS_H_
