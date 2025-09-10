#ifndef BOJ_25000_SRC_25704_ATTENDANCE_EVENT_H_
#define BOJ_25000_SRC_25704_ATTENDANCE_EVENT_H_

#include <algorithm>
#include <iostream>
#include <vector>

class AttendanceEvent {
 public:
  void SetInputs() { std::cin >> n >> p; }

  void Calculate() {
    if (n < 5) {
      result = p;
      return;
    }

    n = n >= 20 ? 20 : n;

    std::vector<long long> sale_prices;
    if (n >= 5) {
      sale_prices.emplace_back(p - 500 <= 0 ? 0 : p - 500);
    }
    if (n >= 10) {
      sale_prices.emplace_back(p * 9 / 10);
    }
    if (n >= 15) {
      sale_prices.emplace_back(p - 2000 <= 0 ? 0 : p - 2000);
    }
    if (n >= 20) {
      sale_prices.emplace_back(p * 3 / 4);
    }
    std::sort(sale_prices.begin(), sale_prices.end());

    result = sale_prices[0];
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  long long p;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  AttendanceEvent attendance_event;
  attendance_event.SetInputs();
  attendance_event.Calculate();
  attendance_event.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25704_ATTENDANCE_EVENT_H_
