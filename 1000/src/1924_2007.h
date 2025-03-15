#ifndef BOJ_1000_SRC_1924_2007_H_
#define BOJ_1000_SRC_1924_2007_H_

#include <iostream>
#include <string>
#include <vector>

class DayOfWeek {
 public:
  void SetInputs() { std::cin >> day >> month; }

  void Calculate() {
    int day_of_week = (days[month - 1] + day) % 7;

    switch (day_of_week) {
      case 0:
        result = "SUN";
        break;
      case 1:
        result = "MON";
        break;
      case 2:
        result = "TUE";
        break;
      case 3:
        result = "WED";
        break;
      case 4:
        result = "THU";
        break;
      case 5:
        result = "FRI";
        break;
      case 6:
        result = "SAT";
        break;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int month;
  int day;
  std::string result;
  std::vector<int> days = {0,   31,  59,  90,  120, 151,
                           181, 212, 243, 273, 304, 334};
};

#ifdef BOJ_SUBMIT
int main() {
  DayOfWeek day_of_week;
  day_of_week.SetInputs();
  day_of_week.Calculate();
  day_of_week.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1924_2007_H_
