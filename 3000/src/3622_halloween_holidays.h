#ifndef BOJ_3000_SRC_3622_HALLOWEEN_HOLIDAYS_H_
#define BOJ_3000_SRC_3622_HALLOWEEN_HOLIDAYS_H_

#include <iostream>
#include <string>

class HalloweenHolidays {
 public:
  void SetInputs() {
    std::cin >> outter_a >> inner_a >> outter_b >> inner_b >> p;
  }

  void Calculate() {
    if (p < outter_a || p < outter_b) {
      result = "No";
    } else {
      if (outter_a > outter_b) {
        auto temp = outter_a;
        outter_a = outter_b;
        outter_b = temp;
        temp = inner_a;
        inner_a = inner_b;
        inner_b = temp;
      }
      if (2 * outter_a <= 2 * inner_b) {
        result = "Yes";
      } else {
        if (2 * p >= 2 * outter_a + 2 * outter_b) {
          result = "Yes";
        } else {
          result = "No";
        }
      }
    }
  }

  void PrintResult() { std::cout << result << "\n"; }

 private:
  int outter_a;
  int outter_b;
  int inner_a;
  int inner_b;
  int p;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  HalloweenHolidays halloween_holidays;
  halloween_holidays.SetInputs();
  halloween_holidays.Calculate();
  halloween_holidays.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3622_HALLOWEEN_HOLIDAYS_H_
