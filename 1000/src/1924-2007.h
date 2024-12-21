#ifndef BOJ_1000_SRC_1924_2007_H_
#define BOJ_1000_SRC_1924_2007_H_

#include <string>

std::string check_day_of_week(int day, int month);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
#include <iostream>
#include <vector>

int main() {
  std::vector<int> days = {0,   31,  59,  90,  120, 151,
                           181, 212, 243, 273, 304, 334};
  int month;
  int day;
  std::cin >> month >> day;
  int day_of_week = (days[month - 1] + day) % 7;

  switch (day_of_week) {
    case 0:
      std::cout << "SUN";
      break;
    case 1:
      std::cout << "MON";
      break;
    case 2:
      std::cout << "TUE";
      break;
    case 3:
      std::cout << "WED";
      break;
    case 4:
      std::cout << "THU";
      break;
    case 5:
      std::cout << "FRI";
      break;
    case 6:
      std::cout << "SAT";
      break;
  }
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1924_2007_H_
