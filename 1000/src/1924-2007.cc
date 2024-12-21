#include "1924-2007.h"

#include <vector>

std::string check_day_of_week(int day, int month) {
  std::vector<int> days = {0,   31,  59,  90,  120, 151,
                           181, 212, 243, 273, 304, 334};
  int day_of_week = (days[month - 1] + day) % 7;

  switch (day_of_week) {
    case 0:
      return "SUN";
    case 1:
      return "MON";
    case 2:
      return "TUE";
    case 3:
      return "WED";
    case 4:
      return "THU";
    case 5:
      return "FRI";
    case 6:
      return "SAT";
  }
}
