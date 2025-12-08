#ifndef BOJ_2000_SRC_2979_PARKING_TRUCK_H_
#define BOJ_2000_SRC_2979_PARKING_TRUCK_H_

#include <iostream>
#include <vector>

class ParkingTruck {
 public:
  void SetInputs() {
    std::cin >> a >> b >> c;
    times.resize(3);

    for (auto& target : times) {
      std::cin >> target.first >> target.second;
    }
  }

  void Calculate() {
    result = 0;
    std::vector<long long> counts(101, 0);
    for (const auto& target : times) {
      for (long long index = target.first; index < target.second; ++index) {
        ++counts[index];
      }
    }

    for (auto count : counts) {
      if (count == 1) {
        result += a;
      } else if (count == 2) {
        result += (b * count);
      } else {
        result += (c * count);
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long a, b, c;
  std::vector<std::pair<long long, long long>> times;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ParkingTruck parkingTruck;
  parkingTruck.SetInputs();
  parkingTruck.Calculate();
  parkingTruck.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2979_PARKING_TRUCK_H_
