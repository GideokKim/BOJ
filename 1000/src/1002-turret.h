#ifndef BOJ_1000_SRC_1002_TURRET_H_
#define BOJ_1000_SRC_1002_TURRET_H_

int check_turret_enemy(int x1, int y1, int r1, int x2, int y2, int r2);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
#include <cmath>
#include <iostream>

int main() {
  size_t test_cases;
  std::cin >> test_cases;
  for (size_t i = 0; i < test_cases; i++) {
    int x1, y1, r1, x2, y2, r2;
    std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    int r1_square = r1 * r1;
    int r2_square = r2 * r2;
    int r3_square = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    double r3 = sqrt(r3_square);

    if (x1 == x2 && y1 == y2 && r1 == r2) {
      std::cout << -1 << std::endl;
    } else if (r3_square > (r1 + r2) * (r1 + r2) ||
               r3_square < (r1 - r2) * (r1 - r2)) {
      std::cout << 0 << std::endl;
    } else if (r3_square == (r1 + r2) * (r1 + r2)) {
      std::cout << 1 << std::endl;
    } else if ((r3 + static_cast<double>(r1)) *
                       (r3 + static_cast<double>(r1)) ==
                   static_cast<double>(r2_square) ||
               (r3 + static_cast<double>(r2)) *
                       (r3 + static_cast<double>(r2)) ==
                   static_cast<double>(r1_square)) {
      std::cout << 1 << std::endl;
    } else {
      std::cout << 2 << std::endl;
    }
  }
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1002_TURRET_H_
