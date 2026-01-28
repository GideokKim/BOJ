#ifndef BOJ_34000_SRC_34297_PARKING_PANDENOMIUM_H_
#define BOJ_34000_SRC_34297_PARKING_PANDENOMIUM_H_

#include <iostream>

class ParkingPandemonium {
 public:
  void SetInputs() { std::cin >> m >> k >> c; }

  void Calculate() { result = m * c; }

  void PrintResult() { std::cout << result; }

 private:
  long long m, k, c;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ParkingPandemonium parkingPandemonium;
  parkingPandemonium.SetInputs();
  parkingPandemonium.Calculate();
  parkingPandemonium.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34297_PARKING_PANDENOMIUM_H_
