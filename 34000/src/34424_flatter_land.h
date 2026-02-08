#ifndef BOJ_34000_SRC_34424_FLATTER_LAND_H_
#define BOJ_34000_SRC_34424_FLATTER_LAND_H_

#include <iostream>

class FlatterLand {
 public:
  void SetInputs() { std::cin >> n >> x; }

  void Calculate() { result = (n - 1) * x; }

  void PrintResult() { std::cout << result; }

 private:
  long long n, x;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  FlatterLand flatter_land;
  flatter_land.SetInputs();
  flatter_land.Calculate();
  flatter_land.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34424_FLATTER_LAND_H_
