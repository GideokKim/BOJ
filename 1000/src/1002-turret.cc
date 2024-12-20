#include "1002-turret.h"

#include <cmath>
#include <iostream>

int check_turret_enemy(int x1, int y1, int r1, int x2, int y2, int r2) {
  int r1_square = r1 * r1;
  int r2_square = r2 * r2;
  int r3_square = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
  double r3 = sqrt(r3_square);

  if (x1 == x2 && y1 == y2 && r1 == r2) {
    return -1;
  } else if (r3_square > (r1 + r2) * (r1 + r2) ||
             r3_square < (r1 - r2) * (r1 - r2)) {
    return 0;
  } else if (r3_square == (r1 + r2) * (r1 + r2)) {
    return 1;
  } else if ((r3 + static_cast<double>(r1)) * (r3 + static_cast<double>(r1)) ==
             static_cast<double>(r2_square)) {
    return 1;
  } else if ((r3 + static_cast<double>(r2)) * (r3 + static_cast<double>(r2)) ==
             static_cast<double>(r1_square)) {
    return 1;
  } else {
    return 2;
  }
}
